#include <stdio.h>
#include "sort.h"

/**
 * swap - Swap two elements in an array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order using Bubble Sort
 * @array: Pointer to the array of integers
 * @size: The number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
                print_array(array, size); /* Print array after each swap */

            }
        }
        if (swapped == 0)
            break;
    }
}
