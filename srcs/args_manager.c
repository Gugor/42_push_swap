#include "../includes/push_swap.h"

/**
 * Input are intgers
 *
 */
void verify_input(int ac, char **av)
{
	int arg;

	arg = 0;
	while(--ac > 0)
	{
		if(!ft_atoi(av[ac]))
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	return ;
}
/**
 * Find duplicate numbers
 *
 */

static int find_duplicate(int size, char **list)
{
	int *args;

	args = (int *)malloc((size + 1) * sizeof(int));
	get_args(size, list, args);
	if (ft_intinclude(args))
	{
		memfree(&args);
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	memfree(&args);
	return (0);
}

/**
 * Verify arguments input
 *
 */
void args_error(int ac, char **av)
{
	if (ac == 1)
		return ;
	verify_input(ac, av);
	find_duplicate(ac, av);
}
/**
 * Get the arguments of the program and set it into the stack
 *
 */
int get_args(int ac, char **av, t_istack *stack)
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