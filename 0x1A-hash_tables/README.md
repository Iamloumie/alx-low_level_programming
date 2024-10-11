# Hash Table Implementation in C

This project implements a hash table data structure in C, along with various operations and utility functions.

## Files

### Main Implementation

- `0-hash_table_create.c`: Creates a hash table
- `1-djb2.c`: Implements the djb2 hash function
- `2-key_index.c`: Gives the index of a key in the hash table array
- `3-hash_table_set.c`: Adds an element to the hash table
- `4-hash_table_get.c`: Retrieves a value associated with a key
- `5-hash_table_print.c`: Prints the hash table
- `6-hash_table_delete.c`: Deletes a hash table

### Additional Implementation

- `100-sorted_hash_table.c`: Implements a sorted hash table

### Header File

- `hash_tables.h`: Contains all function prototypes and structure definitions

### Test Files

- `0-main.c` to `6-main.c`: Test files for each main implementation file
- `100-main.c`: Test file for the sorted hash table implementation

### Other Files

- `a`, `b`, `c`, `d`, `e`, `f`, `g`: Purpose unknown, possibly additional test or data files
- `sht`: Purpose unknown, possibly related to "sorted hash table"

## Compilation

To compile the project, use:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```

## Usage

After compilation, run the resulting executable:

```
./hash_table
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
