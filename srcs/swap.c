#include "push_swap.h"

/**
 *
 */
void ft_swap(int *stack)
{
	int aux;
	
	if (!stack[1])
		return ;
	aux = stack[0];
	stack[0] = stack[1];
	stack[1] = aux;
}

/** 
 * Swaps the two first element of the stack
 * sa
 */
void sa(int *stack)
{
	ft_swap(stack);
	return ;
}

/** 
 * Swaps the two first element of the stack
 * sb
 */
void sb(int *stack)
{
	ft_swap(stack);
	ft_printf("sa\n");
	return ;
}

/** 
 * Swaps the two first element of the stack
 * sb
 */
void ss(int *swpa, int *swpb)
{
	ft_swap(swpa);
	ft_swap(swpb);
	ft_printf("ss\n");
	return ;
}
