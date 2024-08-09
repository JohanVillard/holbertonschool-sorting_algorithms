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
	int pivot = array[high];
  
  /* Indicates the index of the smaller element and the right position of the pivot */
  size_t i = (low - 1);
  size_t j;

  /* traverse each element of the array */
  /* compare them with the pivot */
  for (j = low; j <= high - 1; j++) {
    if (array[j] < pivot)
	{     
      /* if element smaller than pivot is found */
      /* swap it with the greater element pointed by i */
      i++;
      
      /* swap element at i with element at j */
      swap(&array[i], &array[j]);
    }
  }

  /* swap the pivot element with the greater element at i */
  swap(&array[i + 1], &array[high]);
  print_array(array, size);
  /* return the partition point */
  return (i + 1);
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

		if (j != 0)
			recursion_quick_sort(array, low, j - 1, size);
		
		
		recursion_quick_sort(array, j + 1, high, size);
	}
}




