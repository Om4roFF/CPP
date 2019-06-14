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
#include <filesystem>
#include <fstream>

namespace Commit
{
/**
 * Commiting by saving everything from stage to the corresponding folder
 * 
 */
void commit(string commit_name)
{
    commit_name = '"' + commit_name + '"';
    string root = ".mygit\\" + Branch::get_current();

    // Creating commit folder
    system(("mkdir " + (root + "\\commit\\" + commit_name)).c_str());

    // Copying from stage
    system(("xcopy " + (root + "\\stage ") + (root + "\\commit\\" + commit_name + "\\ /i")).c_str());
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