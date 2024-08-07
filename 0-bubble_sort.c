#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: of integer to sort
 * @size: of the array
 *
 * Return: Always nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp = 0;
	int swap_flag = 1;	/* Initialize to 1 to lauch while loop */

	if (size < 2)	/* No need to sort */
		return;

	while (swap_flag != 0)	/* If no swap, the array is sorted */
	{
		swap_flag = 0; /* Reset counter of swap */
		/* One pass --> Iterate in array */
		for (i = 0; i < size; i++)
		{
			if ((array[i] > array[i + 1]) && array[i + 1] != '\0')	/* If true */
			{
				temp = array[i + 1];		/* Swap number */
				array[i + 1] = array[i];
				array[i] = temp;
				swap_flag = 1; /* Indicates that a swap has taken place */
				print_array(array, size);
			}
		}
	}

}
