# MyGit

Implementing basic git functionality like:
- init repository
- commit changes
- returning back to commit
- branches

## Usage
There's no actual usage, I just wanted to write my own git, for practice.

## Installation
MyGit is written in C++.
1) Compile mygit.cpp using any compiler (I'm using MS VS 2017 compiler), example:
```console
C:\MyGit>cl mygit.cpp
```
Output:
`mygit.obj, mygit.exe`

2) Add mygit.exe to system variables
3) Start using

### All commands
- To init repository in current directory: `mygit init`
- List all commands: `mygit help [index]`

<!-- Stage -->
- List all files in stage: `mygit stage`
- Add all changed files to stage: `mygit stage add`
- Add file to stage: `mygit stage add [file name]`
- Remove files from stage: `mygit stage remove [file name]`

<!-- Commit -->
- List all commits in current branch: `mygit commit`
- Commit current stage: `mygit commit [Commit name]`
- Return to commit: `mygit commit back [Commit name]`

<!-- Branch -->
- List all branches: `mygit branch`
- Add new branch: `mygit branch add [Branch name]`
- Remove branch current branch: `mygit branch remove`
- Merge branch with master: `mygit branch merge`
