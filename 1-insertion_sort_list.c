#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: the pointer to the pointer listint_t.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *currt_node, *tp_ptr;

	if (!*list)
	{
		return;
		}
		currt_node = (*list)->next;

		while (currt_node) /* while the curr_node exist we traverse */
		{
			tp_ptr = currt_node; /* the currt_node enter in our pointer */
			currt_node = currt_node->next; /* move the curr_node to the next list */
			/* if the prev list exist and the date of */
			/* tp_ptr is inferior than tp_ptr->prev->n */
			while (tp_ptr->prev && tp_ptr->n < tp_ptr->prev->n)
			{
				/* the next enter to the tp_ptr->prev */
				tp_ptr->prev->next = tp_ptr->next;
				if (tp_ptr->next) /* if exist */
				{
					/* the prev enter to the tp_ptr->next */
					tp_ptr->next->prev = tp_ptr->prev;
					}
					/* prev switch before previuous list */
					tp_ptr->next = tp_ptr->prev;
					/* prev switch 2times previous list */
					tp_ptr->prev = tp_ptr->prev->prev;
					/* the combinaison of the lines prcedent equal the tp_ptr */
					tp_ptr->next->prev = tp_ptr;
					if (tp_ptr->prev) /* if is exist */
					{
						tp_ptr->prev->next = tp_ptr; /* the pointer enter do the prev and next */
						}
					else
						{
							*list = tp_ptr; /* else tp_ptr become list if is not exist */
							}
							print_list(*list); /* print the liste traversed tp_ptr */
							}
							}
							}
