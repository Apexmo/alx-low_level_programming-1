# 0x1A. C - Hash tables

## Resources 
#### Read or watch
  * [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://alx-intranet.hbtn.io/rltoken/IQVfdxJlS6jhAgcuUoCseg)
  * [Hash function](https://alx-intranet.hbtn.io/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
  * [Hash table](https://alx-intranet.hbtn.io/rltoken/mxjKpEfAw3E5B8S3inPuHQ)


## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Tasks 

### Task 0 >>> ht = {}
Write a function that creates a hash table.
 * Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
   * where `size` is the size of the array
 * Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL

### Task 1 - djb2
Write a hash function implementing the djb2 algorithm.
 * Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
 * You are allowed to copy and paste the function [from this page](https://alx-intranet.hbtn.io/rltoken/3B7lCUBD4yZh66Pbl2KcEQ)


### Task 3 >>> ht['betty'] = 'cool' 
Write a function that adds an element to the hash table.

* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
     * Where `ht` is the hash table you want to add or update the key/value t\o
     * `key` is the key. `key` can not be an empty string
     * and `value` is the value associated with the key. value must be duplicated. value can be an empty string
* Returns: `1` if it succeeded, `0` otherwise
* In case of collision, add the new node at the beginning of the list

