#ifndef COMMIT_H
#define COMMIT_H

/**
 * commit command
 * 
 * commiting everything from stage
 * 
 */

#include "../headers.h"
#include "branch.h"

namespace Commit
{
/**
 * Commiting by saving everything from stage to the corresponding folder
 * 
 */
void save(string commit_name)
{
    commit_name = '"' + commit_name + '"';
    string root = ".mygit\\" + Branch::get_current();

    // Creating commit folder
    system(("mkdir " + (root + "\\commit\\" + commit_name)).c_str());

    // Copying from stage
    system(("xcopy " + (root + "\\stage ") + (root + "\\commit\\" + commit_name + "\\ /i")).c_str());

    // Remove all files from stage
    Branch::remove_all((root + "\\stage").c_str());

    cout << "Commited to " << Branch::get_current() << endl;
}

/**
 * Commit command
 * 
 */
void commit(char *commands[])
{
    if (strcmp(commands[2], "back") == 0) // Go back to commit
    {
    }
    else // Commit changes
        save(commands[2]);
}

/**
 * Printing all the commits in current branch
 * 
 */
void list()
{
}

} // namespace Commit
#endif