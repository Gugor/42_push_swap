#include "../includes/push_swap.h"

static void three_engine(t_istack *a)
{
	if(a->list[0] > a->list[1] && a->list[1] > a->list[2])
	{
		rra(a);
		rra(a);
	}
	else if(a->list[0] < a->list[1] && a->list[1] > a->list[2])
	{
		ra(a);
		ra(a);
	}
	else if(a->list[0] > a->list[1] && a->list[1] < a->list[2])
		ra(a);
	else if(a->list[0] > a->list[1] && a->list[1] < a->list[2])
		ra(a);
	ft_printf("[%d,%d,%d]\n", a->list[0], a->list[1], a->list[2]);
}

void push_swap(t_istack *a, t_istack *b)
{
	b = NULL; // BORRARRRRRR !!!!!!!!!!!!!!!!!
	if(is_sorted(a) || a->len < 2)
		exit(EXIT_SUCCESS);
	if (a->len == 3)
		three_engine(a);
}
