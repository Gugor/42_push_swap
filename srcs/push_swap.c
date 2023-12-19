#include "../includes/push_swap.h"
/*
static void print_stacks(int count, t_istack *stacka, t_istack *stackb)
{
	int indx;
	int item;

	if(!stacka || !stackb)
		return ;
	indx = -1;
	item = 0;
	ft_printf("____ ____\n");
	ft_printf("| a | b |\n");
	ft_printf("---- ----\n");
	while(++indx < count)
	{
		if(indx >= stacka->len && indx >= stackb->len )
			ft_printf("|   |   |\n");
		else if(indx >= stacka->len && indx < stackb->len)
			ft_printf("|   | %d |\n", stackb->list[indx]);
		else if(indx < stacka->len  && indx >= stackb->len)
			ft_printf("| %d |   |\n", stacka->list[indx]);
		else if(indx < stacka->len  && indx < stackb->len )
			ft_printf("| %d  | %d |\n", stacka->list[indx], stackb->list[indx]);
	}
	ft_printf("____ ____\n");
}*/

int main(int ac, char **av)
{
	t_istack	*stack_a;
	t_istack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	ac--;
	args_error(ac, av);
	ft_printf(":: Preparing stacks a & b\n");
	allocate_stacks(&stack_a, &stack_b, ac);
	ft_printf(":: Stacks a(%p) & b(%p) allocated in memory\n", stack_a, stack_b);
	ft_printf(":: Program name: %s\n", av[0]);
	get_args(ac, av, stack_a);
	
	if (is_sorted(stack_a))
	{
		memfree(&stack_a);
		memfree(&stack_b);
		return (0);
	}
	push_swap(stack_a, stack_b);

	return (0);
}
