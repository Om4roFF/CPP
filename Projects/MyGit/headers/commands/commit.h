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
    string root = Branch::workingdir() + ".mygit/" + Branch::get_current();

    // Copy
    system(("copy " + (root + "/stage ") + (root + "/commit")).c_str());

    rename((root + "/stage").c_str(), (root + "/" + commit_name).c_str());
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