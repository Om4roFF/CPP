#ifndef BRANCH_H
#define BRANCH_H

/**
 * branch command
 * 
 */

#include "../headers.h"
#include <direct.h>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;

namespace Branch
{
/**
 * Copying directory
 * 
 */
void copy_directory(fs::path source, const char *folder_name)
{
    fs::path target_parent = ".mygit/branches/";
    fs::path result = target_parent;
    result.append(folder_name);
    auto target = target_parent / source.filename();
    fs::create_directories(target);
    fs::copy(source, target, fs::copy_options::recursive);
    fs::rename(target, result);
}

/**
 * Return current working directory
 * 
 */
string workingdir()
{
    char buf[256];
    GetCurrentDirectoryA(256, buf);
    return std::string(buf) + '\\';
}

/**
 * Remove all files in directory
 * 
 */
void remove_all(const char *directory_path)
{
    fs::path path(directory_path);
    fs::remove_all(path);
    fs::create_directory(path);
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
        copy_directory(".mygit/master", branch_name.c_str());
}

/**
 * Listing all branches
 * 
 */
void list()
{
    cout << "Current branch: " << get_current() << endl;
}

/**
 * Branch command
 * 
 */
void branch(char *commands[], int size)
{
    if (strcmp(commands[2], "add") == 0) // Add new branch
    {
        if (size > 3)
        {
            add(commands[3]);
            set_current(commands[3]);
            cout << "Branch was successfully created" << endl;
        }
        else
            cout << "No branch name, follow: 'mygit branch add [branch name]'" << endl;
    }
    else if (strcmp(commands[2], "switch") == 0) // Add new branch
    {
        if (size > 3)
        {
            set_current(commands[3]);
            cout << "Switched to " << commands[3] << endl;
        }
        else
            cout << "No branch name, follow: 'mygit branch switch [branch name]'" << endl;
    }
}
} // namespace Branch

#endif