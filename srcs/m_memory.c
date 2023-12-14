#include "../includes/push_swap.h"

/**
 * Allocate memory for stack a and b
 *
 */
void allocate_stacks(int **stcka, int **stckb, int size)
{
	if (*stcka == NULL)
	{
		*stcka = (int *)malloc(size * sizeof(int));
		if (!stcka)
			exit(EXIT_FAILURE);
		ft_printf(" :: Allocation stack A (bytes=%d)\n", size * sizeof(int));
	}
	if (*stckb == NULL)
	{
		*stckb = (int *)malloc(size * sizeof(int));
		if (*stckb == NULL)
			exit(EXIT_FAILURE);
		ft_printf(" :: Allocation stack B (bytes=%d)\n", size * sizeof(int));
	}
	return ;
}

/**
 * Free memory safely
 */
int memfree(int **mem)
{
	if (mem != NULL || (mem != NULL && *mem != NULL))
	{
		free(*mem);
		mem = NULL;
		return (0);
	}
	return (1);
}
