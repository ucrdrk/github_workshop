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
git submodule update
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

The output of running these tests should all fail, and the output should look like the following:

```bash
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from CS100_TEST_SUITE
[ RUN      ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_POSITIVE
unknown file: Failure
C++ exception with description "error" thrown in the test body.

[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_POSITIVE (4 ms)
[ RUN      ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_NEGATIVE
unknown file: Failure
C++ exception with description "error" thrown in the test body.

[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_NEGATIVE (0 ms)
[ RUN      ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_FLOAT_RESULT
unknown file: Failure
C++ exception with description "error" thrown in the test body.

[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_FLOAT_RESULT (0 ms)
[----------] 3 tests from CS100_TEST_SUITE (4 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (4 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 3 tests, listed below:
[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_POSITIVE
[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_NEGATIVE
[  FAILED  ] CS100_TEST_SUITE.BASIC_MATH_TESTS_SQRT_FLOAT_RESULT

 3 FAILED TESTS
```

## Next Steps

These are the next steps. And some more. 
