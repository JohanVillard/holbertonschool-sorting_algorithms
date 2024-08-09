#include "sort.h"
void swap(int *pivot_num, int *num);
size_t partitioning(int *array, size_t low, size_t high, size_t size);
void recursion_quick_sort(int *array, size_t low, size_t high, size_t size);

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
 * @pivot_num: to swap to num index
 * @num: to swap to pivot index
 *
 */
void swap(int *pivot_num, int *num)
{
	int temp = 0;

	temp = *pivot_num;
	*pivot_num = *num;
	*num = temp;
}

/**
 * partitioning -  partitions a list with respect to a pivot of integers
 *
 * Description:	left in relation to the pivot: smaller values
 *				left in relation to the pivot: higher values
 *
 * @array: to sort
 * @low: lower index
 * @high: higher index
 * @size: of the array
 *
 * Return: actual pivot
 */
size_t partitioning(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	/* Indicates the index of the smaller element */
	/* and the right position of the pivot */
	size_t i = (low - 1);
	size_t j;

	/* Traverse each element of the array */
	/* Compare them with the pivot  */
	for (j = low; j <= high - 1; j++)	/* Exclude last element of the list */
	{
		if (array[j] < pivot)
		{
			/* If element smaller than pivot is found */
			/* Swap it with the greater element pointed by i */
			i++;
			/* No swap if same value in (i+1) and high */
			if (array[i] != array[j])
			{
				/* Swap element at i with element at j */
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}	/* No swap if same value in (i+1) and high */
	if (array[i + 1] != array[high])
	{
		/* Swap the pivot element with the greater element at i */
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	/* Return the partition point */
	return (i + 1);
}

/**
 * recursion_quick_sort - sort 2 lesser and higner lists
 * @array: to sort
 * @low: lower index
 * @high: higher index
 * @size: of the array
 */
void recursion_quick_sort(int *array, size_t low, size_t high, size_t size)
{
	if (low < high)
	{	/* Partition the list */
		size_t pivot = partitioning(array, low, high, size);
		/* Recursively check arrays delimited by low and high values */
		if (pivot != 0)	/* Avoid segfault, if j = 0 */
			recursion_quick_sort(array, low, pivot - 1, size);
		recursion_quick_sort(array, pivot + 1, high, size);
	}
}




