#include "push_swap.h"

/**
 *
 */
void ft_swap(t_istack *stack)
{
	int aux;
	
	if (!stack->list[1])
		return ;
	aux = stack->list[0];
	stack->list[0] = stack->list[1];
	stack->list[1] = aux;
}

/** 
 * Swaps the two first element of the stack
 * sa
 */
void sa(t_istack *stack)
{
	ft_swap(stack);
	ft_printf("sa\n");
	return ;
}

/** 
 * Swaps the two first element of the stack
 * sb
 */
void sb(t_istack *stack)
{
	ft_swap(stack);
	ft_printf("sb\n");
	return ;
}

/** 
 * Swaps the two first element of the stack
 * sb
 */
void ss(t_istack *swpa, t_istack *swpb)
{
	ft_swap(swpa);
	ft_swap(swpb);
	ft_printf("ss\n");
	return ;
}
