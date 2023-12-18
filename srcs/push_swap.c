#include "../includes/push_swap.h"

static void print_istack(t_istack *stack)
{
	if(!stack)
		return ;
	while(*stack)
		ft_printf(":: Stack: \n  %d,\n",*stack++);
}
int main(int ac, char **av)
{
	int	*stack_a;
	t_istack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	args_error(ac, av);
	ft_printf(":: Preparing stacks a & b\n");
	allocate_stacks(&stack_a, &stack_b, ac);
	ft_printf(":: Stacks a(%p) & b(%p) allocated in memory\n", stack_a, stack_b);
	ft_printf(":: Program name: %s\n", av[0]);
	get_args(ac, av, stack_a);
	
	ft_printf(":: Args tretireved: ");
	ft_printf("(%d)\n", stack_a[0]);
	ft_printf("::  a & b\n");
	print_istack(stack_a);
	ra(stack_a);
	print_istack(stack_a);
	ra(stack_a);
	print_istack(stack_a);
	ra(stack_a);
	print_istack(stack_a);
	usleep(5000);
	pb(stack_b, stack_a);
	print_istack(stack_b);
	ft_printf("New stack a:\n");
	print_istack(stack_a);
	ft_printf("Swap stack a:\n");
	sa(stack_a);
	print_istack(stack_a);
	ft_printf("::Freeing memory\n");
	memfree(&stack_a);
	memfree(&stack_b);

	return (0);
}
