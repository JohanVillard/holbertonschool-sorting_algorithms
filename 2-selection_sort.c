#include "sort.h"

/**
 * selection_sort -  sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: to sort
 * @size: of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int least_element, flag = 1;

	if (size < 2)	/* No need to sort */
		return;
	/* Check each index from O to size by each index from O to size */
	while (flag != 0)
	{
		flag = 0;	/* reset flag */
		/* Store element of the next index of array to check*/
		least_element = array[j];
		/* Search the least element in unsorted list */
		for (i = j; i < size; i++)	/* Iterate in the unsorted list */
		{
			if (array[i] < least_element)	/* If find lesser value */
			{
				least_element = array[i];	/* Store the least element */
				array[i] = array[j];	/* Swap */
				array[j] = least_element;
				flag = 1;	/* Loop don't stop */
				print_array(array, size);
			}
		}
		j++;	/* Go to next index to check and sort */
	}
}
