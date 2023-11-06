#include "hash_tables.h"

/**
 * key_index - function gives the index of a key
 *
 *@key: unsigned char key
 *@size: ht array sixe
 *Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
