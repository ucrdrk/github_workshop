# GitHub Workshop

Repo for GitHub Workshops activities

## Getting the Repository

To clone this repository, type the following command into your shell:

```bash
git clone https://github.com/ucrdrk/github-workshop
```

## Initializing Submodules

This repository uses the GoogleTest submodule for unit testing. In order to initialize this submodule in the repository, type the following command in the directory that the repository was cloned into:

```bash
git submodule init
```

## Building the project on the Command Line

This project uses CMake for build. To build this project on the command line, type the following commands into your shell:

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Debug
```

## Running the Tests

Once the build is complete, you can run the unit tests. To run the unit tests, type the following command into your shell:

```bash
./test
```