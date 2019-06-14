#pragma once

/**
 * init command
 * 
 */
#include "branch.h"
#include "stage.h"
#include "commit.h"
#include <direct.h>
#include <fstream>

namespace Init
{
/**
 * Initializing repository.
 * 
 * Return true if job is complete.
 * Return false if repository already exists
 */
bool init()
{
    if (mkdir(".mygit") == 0)
    {
        Branch::add("master"); // Adding new branch
        Branch::set_current("master"); // Setting current branch
        Stage::add(); // Adding all the changes
        Commit::commit("Initial commit"); // Commiting
        return true;
    }
    return false;
}
} // namespace Init