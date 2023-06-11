#include "main.h"
/**
* *_strcpy -  copies the string
* @dest: ch
* @src:  type string
* Description: Copy the string 
* Return: Pointer to `dest`
*/
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');
	return (dest);

}
