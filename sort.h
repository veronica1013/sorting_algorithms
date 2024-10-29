#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Doubly linked list node structure */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);  /* Example sorting function prototype */

#endif /* SORT_H */
