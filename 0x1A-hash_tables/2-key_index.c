#include "hash_tables.h"

/**
 *key_index - calculates the index at which key should be stored in hash table
 *@key: key for which the index is calculated
 *@size: size of the array of the hash table
 *@return: index of key/value pair in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Calculate the hash value of the key*/
	unsigned long int hash = hash_djb2(key);

	/*calculate the index using modulus*/
	unsigned long int index = hash % size;

	return (index);
}
