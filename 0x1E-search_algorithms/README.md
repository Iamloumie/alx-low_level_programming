# Search Algorithms Project

This project contains implementations of various search algorithms in C, as well as helper functions for working with linked lists and skip lists. Below is a breakdown of the files and their respective purposes.

## Table of Contents

- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Usage](#usage)
- [Files](#files)
- [Header File](#header-file)
- [Author](#author)

## Project Structure

The project is organized as follows:

```
├── 0-linear.c
├── 0-main.c
├── 1-binary.c
├── 1-main.c
├── 100-jump.c
├── 100-main.c
├── 101-O
├── 102-interpolation.c
├── 102-main.c
├── 103-exponential.c
├── 103-main.c
├── 104-advanced_binary.c
├── 104-main.c
├── 105-jump_list.c
├── 105-main.c
├── 106-linear_skip.c
├── 106-main.c
├── create_list.c
├── create_skiplist.c
├── free_list.c
├── free_skiplist.c
├── print_list.c
├── print_skiplist.c
├── search_algos.h
```

## Compilation

To compile the files, use `gcc` with the following flags:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=c99 -o <output_file> <source_files>
```

For example, to compile `0-linear.c` and its main file:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=c99 -o 0-linear 0-linear.c 0-main.c
```

## Usage

Each search algorithm has a corresponding main file for testing. To run a specific algorithm, compile the corresponding `.c` files and execute the output binary.

### Example

To test the linear search implementation:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=c99 -o 0-linear 0-linear.c 0-main.c
./0-linear
```

## Files

### Search Algorithm Implementations

- **0-linear.c**: Linear search algorithm.
- **1-binary.c**: Binary search algorithm.
- **100-jump.c**: Jump search algorithm.
- **102-interpolation.c**: Interpolation search algorithm.
- **103-exponential.c**: Exponential search algorithm.
- **104-advanced_binary.c**: Advanced binary search algorithm.
- **105-jump_list.c**: Jump search algorithm for linked lists.
- **106-linear_skip.c**: Linear search algorithm for skip lists.

### Main Files

Each algorithm has a corresponding `main.c` file for testing:

- **0-main.c**, **1-main.c**, **100-main.c**, etc.

### Helper Functions

- **create_list.c**: Creates a linked list for testing.
- **create_skiplist.c**: Creates a skip list for testing.
- **free_list.c**: Frees a linked list.
- **free_skiplist.c**: Frees a skip list.
- **print_list.c**: Prints a linked list.
- **print_skiplist.c**: Prints a skip list.

### Header File

- **search_algos.h**: Contains function prototypes, data structures, and macros used in the project.

## Author

Olumide
