#include "../includes/push_swap.h"

/**
 * Reverse elements in a stack, last become first.
 */
void ft_reverse(t_istack *stack)
{
	int aux;
	int indx;

	if (!stack->list || stack->len < 2)
		return ;
	indx = stack->len;
	aux = stack->list[indx - 1];
	while(--indx > 0)
		stack->list[indx] = stack->list[indx - 1];
	stack->list[0] = aux;
	return ;
}

/**
 * Reverse a moves down all elements in the stack in such way that
 * the last one becomes the first. Oposite of rotate
 */
void rra(t_istack *stack)
{
	if (!stack)
		return ;
	ft_reverse(stack);
	ft_printf("rra\n");
	return ;
}

/**
 * Reverse b moves down all elements in the stack in such way that
 * the last one becomes the first. Oposite of rotate
 */
void rrb(t_istack *stack)
{
	if (!stack)
		return ;
	ft_reverse(stack);
	ft_printf("rrb\n");
	return ;
}
/**
 * Reverse both stacks a & b
 * 
 */
void rrr(t_istack *stcka, t_istack *stckb)
{
	ft_reverse(stcka);
	ft_reverse(stckb);
	ft_printf("rrr\n");
	return ;
}

