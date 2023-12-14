#include "../includes/push_swap.h"

/**
 * Reverse elements in a stack, last become first.
 */
void ft_reverse(int *stack)
{
	char aux;
	int len;

	if (!stack[0])
		return ;
	len = ft_len(stack);
	aux = stack[len - 1];
	while(--len > 0)
		stack[len] = stack[len - 1];
	stack[0] = aux;
}

/**
 * Reverse a moves down all elements in the stack in such way that
 * the last one becomes the first. Oposite of rotate
 */
void rra(int *stack)
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
void rrb(int *stack)
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
void rrr(int *stcka, int *stckb)
{
	ft_reverse(stcka);
	ft_reverse(stckb);
	ft_printf("rrr\n");
}

