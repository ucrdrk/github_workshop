# GitHub Workshop

Repo for GitHub Workshops activities

## Getting the Repository

GitHub protects outside programmers from changing files under the control of a programmer, even if the repository is public. Therefore, in order to protect the original code and still allow the posibility of changes from outside collaborators, we will use the fork feature of GitHub for this workshop activity.

So the first step will be to fork the GitHub Workshop repository. Go to the repository at https://github.com/ucrdrk/github-workshop. In the upper right-head side between Watch adn Star, you will find Fork. Select the down arrow and then select "Create New Fork". On the next page your will see different fields that can be changed to create the fork. Just accept all the default values and click "Create Fork" at the bottom.

You have now created a new repository that you own, that is an exact copy of the original. The next step is to clone this forked repository to your local computer.

To clone the forked repository, type the following command into your shell:

```bash
git clone https://github.com/<your username>/github-workshop
```

Replace `<your username>` including the `<` and `>` with your GitHub username.

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
[==========] Running 12 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 12 tests from CS100_TEST_SUITE_BASIC_MATH_TESTS
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_POSITIVE
/home/harve/cs100/tdd/test.cpp:8: Failure
Expected equality of these values:
  3.0
    Which is: 3
  sqrt(9.0)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_POSITIVE (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_NEGATIVE
/home/harve/cs100/tdd/test.cpp:16: Failure
Value of: std::isnan(sqrt(-9.0))
  Actual: false
Expected: true

/home/harve/cs100/tdd/test.cpp:17: Failure
Value of: std::isnan(sqrt(-49.0))
  Actual: false
Expected: true

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_NEGATIVE (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_FLOAT_RESULT
/home/harve/cs100/tdd/test.cpp:24: Failure
Expected equality of these values:
  1.2
  sqrt(1.44)
    Which is: -1

/home/harve/cs100/tdd/test.cpp:25: Failure
Expected equality of these values:
  0.6
    Which is: 0.59999999999999998
  sqrt(.36)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_FLOAT_RESULT (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN
/home/harve/cs100/tdd/test.cpp:32: Failure
Expected equality of these values:
  ::sin(3.14159265358979323846)
    Which is: 1.2246467991473532e-16
  sin(3.14159265358979323846)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN
/home/harve/cs100/tdd/test.cpp:40: Failure
Value of: std::isnan(sin((__builtin_nanf (""))))
  Actual: false
Expected: true

/home/harve/cs100/tdd/test.cpp:41: Failure
Value of: std::isnan(sin((__builtin_inff ())))
  Actual: false
Expected: true

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS
/home/harve/cs100/tdd/test.cpp:49: Failure
Expected equality of these values:
  ::cos(0)
    Which is: 1
  cos(0)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN
/home/harve/cs100/tdd/test.cpp:56: Failure
Value of: std::isnan(cos((__builtin_nanf (""))))
  Actual: false
Expected: true

/home/harve/cs100/tdd/test.cpp:57: Failure
Value of: std::isnan(cos((__builtin_inff ())))
  Actual: false
Expected: true

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS
/home/harve/cs100/tdd/test.cpp:64: Failure
Expected equality of these values:
  3.0
    Which is: 3
  abs(3.0)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN
/home/harve/cs100/tdd/test.cpp:73: Failure
Expected equality of these values:
  (__builtin_inff ())
    Which is: inf
  abs((__builtin_inff ()))
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW
/home/harve/cs100/tdd/test.cpp:80: Failure
Expected equality of these values:
  9.0
    Which is: 9
  pow(3.0, 2)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL
/home/harve/cs100/tdd/test.cpp:88: Failure
Expected equality of these values:
  3.0
    Which is: 3
  pow(9.0, 0.5)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND
/home/harve/cs100/tdd/test.cpp:96: Failure
Expected equality of these values:
  3.0
    Which is: 3
  round(3.4)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND (0 ms)
[----------] 12 tests from CS100_TEST_SUITE_BASIC_MATH_TESTS (0 ms total)

[----------] Global test environment tear-down
[==========] 12 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 12 tests, listed below:
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_POSITIVE
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_NEGATIVE
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_FLOAT_RESULT
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND

12 FAILED TESTS
```

## Next Steps

Next we'll add some code to make the tests pass. 

This project uses a concept called Test Drive Design (TDD). In TDD tests are written before the implementation, and then the developer adds code to make the tests pass. This approach tends to lead to cleaner, more testable code. 

Your job is to make at least one test pass. 

In the C++ file `basic_math.cpp` there are 6 basic math functions. The following is a list of these functions:

1. `double sqrt(double x)`
1. `double sin(double x)`
1. `double cos(double x)`
1. `double abs(double x)`
1. `double pow(double x)`
1. `double round(double x)`

Choose one of these functions to implement. Don't worry, it'll be easy. We're going to use implementations of these functions provided by the Standard Template Library. So, for example, to implement the `sqrt` function we will change the following code:

```c++
    double sqrt(double x) {
        return NAN;
    }
```

to this:

```c++
    double sqrt(double x) {
        return ::sqrt(x);
    }
```

Now do it yourself. Pick one of the functions and provide an implementation. It will be interesting to see if by letting you all choose any function you want we get implementations of all the functions.

### Testing Your Changes

After making your changes, we need to test that at least one new test passes. Go to the build directory and build the code with your changes using the following command in the terminal:

```bash
cd build
cmake --build . --config Debug
```

Then run the tests with the following command:

```bash
./test
```

You should see something like the following:

```bash
[==========] Running 12 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 12 tests from CS100_TEST_SUITE_BASIC_MATH_TESTS
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_POSITIVE
[       OK ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_POSITIVE (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_NEGATIVE
[       OK ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_NEGATIVE (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_FLOAT_RESULT
[       OK ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SQRT_FLOAT_RESULT (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN
/home/harve/cs100/tdd/test.cpp:32: Failure
Expected equality of these values:
  ::sin(3.14159265358979323846)
    Which is: 1.2246467991473532e-16
  sin(3.14159265358979323846)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN
/home/harve/cs100/tdd/test.cpp:40: Failure
Value of: std::isnan(sin((__builtin_nanf (""))))
  Actual: false
Expected: true

/home/harve/cs100/tdd/test.cpp:41: Failure
Value of: std::isnan(sin((__builtin_inff ())))
  Actual: false
Expected: true

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS
/home/harve/cs100/tdd/test.cpp:49: Failure
Expected equality of these values:
  ::cos(0)
    Which is: 1
  cos(0)
    Which is: -1

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN
/home/harve/cs100/tdd/test.cpp:56: Failure
Value of: std::isnan(cos((__builtin_nanf (""))))
  Actual: false
Expected: true

/home/harve/cs100/tdd/test.cpp:57: Failure
Value of: std::isnan(cos((__builtin_inff ())))
  Actual: false
Expected: true

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS
/home/harve/cs100/tdd/test.cpp:64: Failure
Expected equality of these values:
  3.0
    Which is: 3
  abs(3.0)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN
/home/harve/cs100/tdd/test.cpp:73: Failure
Expected equality of these values:
  (__builtin_inff ())
    Which is: inf
  abs((__builtin_inff ()))
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW
/home/harve/cs100/tdd/test.cpp:80: Failure
Expected equality of these values:
  9.0
    Which is: 9
  pow(3.0, 2)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL
/home/harve/cs100/tdd/test.cpp:88: Failure
Expected equality of these values:
  3.0
    Which is: 3
  pow(9.0, 0.5)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL (0 ms)
[ RUN      ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND
/home/harve/cs100/tdd/test.cpp:96: Failure
Expected equality of these values:
  3.0
    Which is: 3
  round(3.4)
    Which is: nan

[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND (0 ms)
[----------] 12 tests from CS100_TEST_SUITE_BASIC_MATH_TESTS (0 ms total)

[----------] Global test environment tear-down
[==========] 12 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 3 tests.
[  FAILED  ] 9 tests, listed below:
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.SIN_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.COS_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ABS_NAN
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.POW_FRACTIONAL
[  FAILED  ] CS100_TEST_SUITE_BASIC_MATH_TESTS.ROUND

 9 FAILED TESTS
```

Notice, that unlike last time in [Running the Tests](#running-the-tests), you fail only 9 tests, instead of 12. That's progress ;-).

### Getting Your Implementations of the functions Back to the Original Repository on Github

Now you want to get your code back to the original GitHub repository, for which you don't have permission. Don't worry, there's a way to do that.

First, you need to get the code back to your forked version of the repository. That's relatively easy, but we need to first address authentication.

#### Authenticating for GitHub

In the old days (yes, it was in color), we sent the username and password to authenticate ourselves to GitHub whenever we wanted to push code to it. However, to ensure stronger authentication, GitHub has moved to other techniques. We will use SSH keys.

The first step is to create an SSH Key. Instructions for that process can be found [here](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent). Once you've created the link, you need to link the public key to your account on GitHub. The directions for doing that can be found [here](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account). Follow those directions before moving on to the next section.

#### Committing your Code

Before you can push your code, you need to commit your code in git. First, select which code you will be committing with the following command:

```bash
git add basic_math.cpp
git commit -m "<Put a meaningful commit message here>"
```

If you changed other files and want to send them to your repository, add them to the list of files for the `git add` command.

#### Pushing your code to your Repository

Once you've properly added your SSH Key to GitHub, you can securely push your code to your repository.

In the top directory (in other words, not the build directory) of your repository, type the following command in the shell:

```bash
git push
```

If the command succeeded, you should see something like the following:

```bash
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 325 bytes | 325.00 KiB/s, done.
Total 3 (delta 2), reused 0 (delta 0), pack-reused 0
To github.com:<your github name>/github_workshop.git
   c378712..7b0b7a1  main -> main
```

#### Great, now what?

Now yuou need to gently ask the author of the original code to pull in your changes. Luckily, GitHub provides a way to gently asked, and is called a Pull Request.  A pull request is done through GitHub.

Got to your forked repository on GitHub after your have successfully pushed your changes, as described in the section above. On that page in your browser you should see information about your last commit, along with a button, name "Contribute" that will allow you to create a pull request. Click on that button and select "Open pull request". 

You will be presented with a bag that allows you to give more information to the original developer about the code you are requesting to be added. Put in a brief description under "Add a Description" and then press the "Create pull request" button.

It will give you information about the testing of this pull request and send it to the original developer.

Now watch the instructor as they show how the Pull Request is handled in the original repository.