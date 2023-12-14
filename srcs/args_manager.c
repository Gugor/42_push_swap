#include "../includes/push_swap.h"

/**
 * Get the arguments of the program and set it into the stack
 *
 */
int get_args(int ac, char **av, int *stack)
{
	int indx;
	int arg;
	char **vals;

	indx = -1;
	arg = 0;
	vals = av;
	
	if (av == NULL || stack == NULL)
		return (0);
	ft_printf(":: Getting args...\n");
	ft_printf(" :: Stack size: %d\n", ft_len(stack));
	while (++indx < ac - 1)
	{
		arg = ft_atoi(vals[indx + 1]); 
		ft_printf("Saving arg [%d]\n", indx);
		*(stack + indx) = arg;
		printf("  %d\n", arg);
	}
	ft_printf("\n");
	return (indx);

}
