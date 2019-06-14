#ifndef BRANCH_H
#define BRANCH_H

/**
 * branch command
 * 
 */

#include "../headers.h"
#include <direct.h>
#include <fstream>

namespace Branch
{
/**
 * Returning current working directory
 * 
 */
std::string workingdir()
{
    char buf[256];
    GetCurrentDirectoryA(256, buf);
    return std::string(buf) + '\\';
}

/**
 * Adding new branch to the repository
 * 
*/
void add(string branch_name)
{
    if (branch_name == "master")
    {
        string root = ".mygit/" + branch_name, commit = root + "/commit", stage = root + "/stage";
        // Setting root
        mkdir(root.c_str());

        // Setting commit
        mkdir(commit.c_str());

        // Setting stage
        mkdir(stage.c_str());
    }
    else // Copy from master
    {
        
    }
}
/**
 * Setting current branch
 * 
 */
void set_current(char *branch_name)
{
    fstream repo;
    repo.open(".mygit/current_branch.bin", ios::out);
    repo << branch_name << endl;
}
/**
 * Return current branch name
 * 
 */
string get_current()
{
    fstream repo;
    repo.open(".mygit/current_branch.bin", ios::in);
    string result;
    repo >> result;
    return result;
}
} // namespace Branch

#endif