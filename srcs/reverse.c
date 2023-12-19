#include "../includes/push_swap.h"

/**
 * Reverse elements in a stack, last become first.
 */
void ft_reverse(t_istack *stack)
{
	int aux;

	ft_printf(":: Reversing\n");
	if (!stack->list || stack->len < 2)
		return ;
	ft_printf(":: Revers stack len %d\n", stack->len);
	aux = stack->list[stack->len];
	while(--stack->len > 0)
		stack->list[stack->len] = stack->list[stack->len - 1];
	stack->list[0] = aux;
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
}

