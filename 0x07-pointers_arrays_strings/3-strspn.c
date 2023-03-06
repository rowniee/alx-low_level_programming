#include "main.h"
/**
 * _strspn - beginning of the function
 * @s: string to be searchd
 * @accept: character containg the bytes
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
    int found;

    while (*s != '\0') {
        found = 0;
        for (char *p = accept; *p != '\0'; p++) {
            if (*s == *p) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            return count;
        }
        s++;
        count++;
    }
    return count;
}
