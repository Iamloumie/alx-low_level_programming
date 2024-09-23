# C Programming Project

This project contains various C functions, shell scripts, and Python files demonstrating different programming concepts and utilities.

## Files

### C Source Files

- `0-isupper.c`: Function to check for uppercase character
- `0-memset.c`: Memory set function
- `0-strcat.c`: String concatenation function
- `1-isdigit.c`: Function to check for a digit
- `1-memcpy.c`: Memory copy function
- `1-strncat.c`: String concatenation function with n bytes
- `2-strchr.c`: String character locating function
- `2-strlen.c`: String length function
- `2-strncpy.c`: String copy function with n bytes
- `3-islower.c`: Function to check for lowercase character
- `3-puts.c`: Function to print a string
- `3-strcmp.c`: String comparison function
- `3-strspn.c`: Function to get length of a prefix substring
- `4-isalpha.c`: Function to check for alphabetic character
- `4-strpbrk.c`: Search a string for any of a set of bytes
- `5-strstr.c`: Locates a substring
- `6-abs.c`: Computes the absolute value of an integer
- `9-strcpy.c`: Copies the string pointed to by src
- `100-atoi.c`: Convert a string to an integer
- `_putchar.c`: Write a character to stdout

### Header File

- `main.h`: Header file containing function prototypes

### Shell Scripts

- `1-create_dynamic_lib.sh`: Script to create a dynamic library
- `101-make_me_win.sh`: Script related to a specific task (purpose to be specified)

### Python File

- `100-tests.py`: Python test file

### Compiled Files

- `100-operations.so`: Shared object file for operations
- `liball.so`: Dynamic library containing all functions
- `libdynamic.so`: Another dynamic library
- `len`: Executable file (purpose to be specified)
- `mathop.o`: Object file for math operations

### Other

- `mathop.c`: Source file for math operations

## Usage

Compile the C files using:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o output_file
```

To create a dynamic library, run:

```
./1-create_dynamic_lib.sh
```

For Python tests, execute:

```
python3 100-tests.py
```

## Note

Please refer to individual file headers or accompanying documentation for specific usage instructions and details about each function or script.
