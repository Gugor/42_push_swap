#include "../includes/push_swap.h"

/**
  * Count the number of items in an int array
  *
  */
 int ft_len(int *nums)
 {
     int indx;

     if (!nums)
         return (0);
     indx = 0;
     while (nums[indx])
         indx++;
     return (indx);
 }

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
