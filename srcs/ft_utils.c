#include "../includes/push_swap.h"

/**
 * Find if there is repited numbers in an array
 *
 */
int ft_icheckdups(int *nums)
{
	int len;
	int indx;

	len = -1;
	indx = 1;
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
 * Find the maximun integer in a list
 *
 */
int find_max(int *nums)
{
    int maxindx;
    int pos;

    maxindx = 0;
    pos = -1;
    if (nums == NULL)
        return (-1);
    while (*(nums + ++pos))
    {
        if (*(nums + maxindx) < *(nums + pos))
                maxindx = pos;
    }
    return (maxindx);
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
