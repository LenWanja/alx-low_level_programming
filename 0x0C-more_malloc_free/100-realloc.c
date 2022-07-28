#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_location, *new_ptr;
unsigned int i = 0;

if (new_size == old_size)
return (ptr);
if (ptr == NULL) /* treat it as normal malloc */
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
new_location = malloc(new_size);
new_ptr = ptr;
if (old_size > new_size)
old_size = new_size;
for (i = 0; i < old_size; i++)
new_location[i] = new_ptr[i];
free(ptr);
return (new_location);
}
