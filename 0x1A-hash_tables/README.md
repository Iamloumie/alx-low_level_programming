# Hash Table Implementation

This project implements a hash table data structure in C.
It includes basic operations like creation, insertion, retrieval, printing, and deletion of key-value pairs,
as well as an advanced sorted hash table implementation.

## Files

- `0-hash_table_create.c`: Creates a hash table
- `1-djb2.c`: Implements the djb2 hash function
- `2-key_index.c`: Gives the index of a key in the hash table array
- `3-hash_table_set.c`: Adds an element to the hash table
- `4-hash_table_get.c`: Retrieves a value associated with a key
- `5-hash_table_print.c`: Prints the hash table
- `6-hash_table_delete.c`: Deletes a hash table
- `100-sorted_hash_table.c`: Implements a sorted hash table
- `hash_tables.h`: Header file containing function prototypes and data structures

## Compilation

To compile the project, use:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```

## Usage

Include `hash_tables.h` in your C file and link with the compiled object files.

Example:

```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "key", "value");
    printf("%s\n", hash_table_get(ht, "key"));
    hash_table_delete(ht);

    return (0);
}
```
