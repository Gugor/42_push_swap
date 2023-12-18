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
