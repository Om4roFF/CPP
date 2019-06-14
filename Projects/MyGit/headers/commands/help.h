#ifndef HELP_H
#define HELP_H

/**
 * help command
 * 
 */

#include "../headers.h"
#include "test.h"

namespace help_commands
{
void basic()
{
    cout << "List of all basic commands" << endl
         << endl;
    cout << "mygit - Get the information about program" << endl
         << "mygit help [index] - list all the commands in list by index (0-4)" << endl
         << "mygit init - initialize repository in current directory" << endl;
}
void stage()
{
    cout << "List of all stage commands" << endl
         << endl;
    cout << "mygit stage - list all files in the stage" << endl
         << "mygit stage add - add all changed files to the stage" << endl
         << "mygit stage add [file name] - add file to the stage" << endl
         << "mygit stage remove [file name] - remove file from the stage" << endl;
}
void commit()
{
    cout << "List of all commit commands" << endl
         << endl;
    cout << "mygit commit - list commit history in current branch" << endl
         << "mygit commit [commit name] - commit changes in current stage" << endl
         << "mygit commit back [commit name] - roll back to the commit" << endl;
}
void branch()
{
    cout << "List of all branch commands" << endl
         << endl;
    cout << "mygit branch - list all branches" << endl
         << "mygit branch add [branch name] - add a new branch and switch to it" << endl
         << "mygit branch remove - delete current branch" << endl
         << "mygit branch merge - merge current branch with master" << endl
         << "mygit branch switch [branch name] - switch to another branch" << endl;
}
void test()
{
    cout << "List of all test commands " << endl
         << endl;
    cout << "mygit test [test name] - launch test by it's name" << endl
         << endl
         << "Test names:" << endl;
    for (size_t i = 0; i < Test::tests_count; i++)
        cout << Test::tests[i] << endl;
}
} // namespace help_commands

void help(char *arg)
{
    int index = arg[0] - 48;
    if (index == 0) // Basic commands
        help_commands::basic();
    else if (index == 1) // Stage commands
        help_commands::stage();
    else if (index == 2) // Commit commands
        help_commands::commit();
    else if (index == 3) // Branch commands
        help_commands::branch();
    else if (index == 4) // Test commands
        help_commands::test();
}
#endif