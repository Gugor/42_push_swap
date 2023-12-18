#include "../includes/push_swap.h"

/**
 * Find if there is repited numbers in an array
 *
 */
int ft_intinclude(int *nums)
{
	int len;
	int indx;

	len = -1;
	indx = 1;
	ft_printf(":: Finding matches\n");
	while (nums[++len])
	{
		while (nums[len + indx] && (nums[len + indx] != nums[len]))
			indx++;
		if (nums[len] == nums[len + indx])
		{
			return (1);
		}
		indx = 1;
	}
	return (0);
}


/**
 * Checks if stack is sorted 
 *
 */
int is_sorted(t_istack *stck)
{
	int indx;
	int *list;

	indx = -1;
	list = stck->list;

	while (*(list + ++indx))
		if(list[indx + 1] && list[indx] > list[indx + 1]) 
			return (0);
	return (1);
}
