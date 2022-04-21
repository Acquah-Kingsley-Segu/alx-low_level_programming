#include <stddef.h>

#ifndef LIST_H
#define LIST_H

/* Node definition */
/**
 * list_t - struct to define node structure
 * @str: string parameter
 * @len: lenght of string
 * @next: pointer to next node
 *
 */

typedef struct list_t *nodePtr;
typedef struct list_t
{
	char *str;
	int len;
	nodePtr next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
#endif
