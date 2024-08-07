#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {767, 885, 155, 260, 282, 157, 916, 716, 688, 740, 373, 309, 790, 185, 446, 655, 96, 784, 117, 417, 681, 61, 271, 325, 299, 499, 992, 712, 170, 793, 605, 407, 963, 161, 333, 480, 622, 687, 495, 217, 65, 172, 255, 966, 23, 633, 775, 557, 877, 276, 348, 130, 228, 453, 243, 286, 374, 371, 925, 643, 283, 461, 101, 193, 171, 488, 293, 545, 731, 961, 5, 10, 763, 167, 899, 685, 183, 334, 706, 824, 581, 570, 375, 662, 572, 579, 449, 97, 757, 127, 412, 75, 828, 860, 911, 555, 884, 652, 859, 840};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
