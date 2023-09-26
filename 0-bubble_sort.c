#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @first: The first integer to swap.
 * @second: The second integer to swap.
 */
void swap_integers(int *first, int *second)
{
    int tmp;

    tmp = *first;
    *first = *second;
    *second = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, length = size;
    bool isSorted = false;

    if (array == NULL || size < 2)
        return;

    while (isSorted == false)
    {
        isSorted = true;
        for (i = 0; i < length - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_integers(array + i, array + i + 1);
                print_array(array, size);
                isSorted = false;
            }
        }
        length--;
    }
}

