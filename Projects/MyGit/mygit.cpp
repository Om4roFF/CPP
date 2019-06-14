#pragma once

/**
 * Main file, commands are working here
 * 
 * Commands:
 * mygit - current version
 * mygit help - list all commands
 * 
 * mygit init - init repository
 * 
 * mygit stage - list all files in stage
 * mygit stage add - add all changed files to stage
 * mygit stage add "file name" - add file to stage
 * mygit stage remove "file name" - remove file from stage
 * 
 * mygit commit - list commit history in current branch
 * mygit commit "Commit name" - commit current stage
 * mygit commit back "Commit name" - return to commit
 * 
 * mygit branch - list all branches
 * mygit branch add "Branch name" - create a new branch
 * mygit branch remove - delete current branch
 * mygit branch merge - merge current branch with master
 * mygit branch switch [branch name] - switch to the branch
 * 
 * mygit test "Test name"
 */

#include "headers/headers.h"
#include "headers/commands/test.h"
#include "headers/commands/help.h"
#include "headers/commands/init.h"
#include "headers/commands/commit.h"
#include "headers/commands/branch.h"
#include "headers/commands/stage.h"

#define version 0.5
#define program_name "MyGit"
#define author "RayDarar"


void main(int argc, char *argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    if (argc == 1) // mygit
        printf("[%s]\nVersion %.1f\nAuthor '%s'\n", program_name, version, author);
    else // Other commands
    {
        if (strcmp(argv[1], "init") == 0) // init
        {
            if (Init::init())
                cout << "Repository created" << endl;
            else
                cout << "Repository already exists" << endl;
        }
        else if (strcmp(argv[1], "branch") == 0) // branch
        {
            if (argc > 2)
                Branch::branch(argv, argc);
            else
                Branch::list();
        }
        else if (strcmp(argv[1], "commit") == 0) // commit
        {
            if (argc > 2)
                Commit::commit(argv);
            else
                Commit::list();
        }
        else if (strcmp(argv[1], "help") == 0) // help
        {
            if (argc > 2)
                help(argv[2]);
            else
                cout << "Please, specify help book's index from 0 to 4: 'mygit help [index]'" << endl;
        }
        else if (strcmp(argv[1], "test") == 0) // Launching test
        {
            if (argc > 2) // There's test
                Test::test(argv[2]);
            else
                Test::test("");
        }
        else
            cout << "No command found, try 'mygit help'" << endl;
    }
}