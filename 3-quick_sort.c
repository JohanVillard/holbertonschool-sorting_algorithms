#include "sort.h"
void swap(int *pivot_num, int *num);
size_t partitioning(int *array, size_t low, size_t high, size_t size);
void recursion_quick_sort(int *array, size_t low, size_t high, size_t size);
#include <stdio.h>

/**
 * quick_sort -  sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: to sort
 * @size: of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	recursion_quick_sort(array, 0, size - 1, size);
}

/**
 * swap - swap numbers in the array
 * @pivot_num: to swap
 * @num: to swap */
void swap(int *pivot_num, int *num)
{
	int temp = 0;

	temp = *pivot_num;
	*pivot_num = *num;
	*num = temp;
}

/**
 * partitioning -  partition an array of integers
 * @array: to sort
 * @size: of the array
 */
size_t partitioning(int *array, size_t low, size_t high, size_t size)
{

    // initialize pivot to be the first element
    int pivot = array[low];
    size_t i = low;
    size_t j = high;

    while (i < j) {

        /* condition 1: find the first element greater than */
        /* the pivot (from starting) */
        while (array[i] <= pivot && i <= high - 1)
            i++;
        /* condition 2: find the first element smaller than */
       	/* the pivot (from last) */
        while (array[j] > pivot && j >= low + 1)
            j--;

		if (i < j)
		{
            swap(&array[i], &array[j]);
			print_array(array, size);
        }

    }
    swap(&array[low], &array[j]);
	print_array(array, size);
    return j;
}

/**
 * lesser_quick_sort -  sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: to sort
 * @size: of the array
 */
void recursion_quick_sort(int *array, size_t low, size_t high, size_t size)
{
	if (low < high)
 	{
		size_t j = partitioning(array, low, high, size);

		recursion_quick_sort(array, low, j - 1, size);
		recursion_quick_sort(array, j + 1, high, size);
	}
}




