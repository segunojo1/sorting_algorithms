#include "sort.h"

/**
 * sort - it flips the positions
 * @px: position of the first
 * @py: position of the second
*/
void sort(int* px, int* py)
{
    int save = *px;
    *px = *py;
    *py = save;
}

/**
 * bubble_sort - does the buble sort
 * @array: array to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    bool sorted;
    
    for (i = 0; i < size - 1; i++)
    {
        sorted = false;
        for (j = 0; j < i - size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                sort(&array[j], &array[j + 1]);
                sorted = true;
            }
        }
        if (sorted == false)
        {
            break;
        }
        
    }
}