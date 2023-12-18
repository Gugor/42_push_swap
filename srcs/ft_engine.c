#include "../includes/push_swap.h"

/**
 * Merge two int arrays
 *
 */
static void merge(int *left, int *right, int *orign)
{
	int left_array;
	int right_array;
	int l;
	int r;
	
	left_size= ft_len(origin) / 2;
	right_size = ft_len(origin) - left_array;
	l = 0;
	r = 0;

	while (l < left_size && r < right_size)
	{
		if (left[l] < right[i])
		{
			origin[i] = left[l];
			i++;
			l++;
		}
		else
		{
			origin[i] = right[r];
			i++;
			r++;
		}
		while (l < left_size)
		{
			origin[i] = left[l];
			i++;
			l++;
		}
		while (r < right_size)
		{
			origin[i] = right[l];
			i++;
			r++;
		}
	}

}

/**
 * Sorts recursively an integer array
 *
 */
void mergesort(int *origin)
{
	int	*left;
	int	*right;
	int size;
	int	middle;

	size = ft_len(origin);
	if (len <= 1)
		return ;
	middle = size / 2;
	left = ft_intndup(origin, middle);
	right = ft_intndup(origin + middle, middle);
	mergesort(left);
	mergesort(right);
	merge(left, right, origin);
}
