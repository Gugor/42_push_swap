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
static int has_duplicate(int size, char **args)
{
	t_istack *stack;

	stack = NULL;
	new_stack(&stack, size);
	get_args(size, args, stack);
	if (ft_icheckdups(stack->list))
	{
		free(stack);
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	free(stack);
	return (1);
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
	has_duplicate(ac, av);
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
	while (++indx < ac)
	{
		arg = ft_atoi(vals[indx + 1]); 
		stack->list[indx] = arg;
	}
	stack->len = indx;
	return (indx);

}
