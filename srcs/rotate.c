#include "../includes/push_swap.h"

/**
 *  Rorate move up all items in a stack and first becomes last
 *
 */
void ft_rotate(t_istack *stack)
{
	int aux;
	int indx;

	if (!stack->list)
		return ;
	aux = stack->list[0];
	indx = -1;
	while ( ++indx < stack->len)
		stack->list[indx] = stack->list[indx + 1];
	stack->list[indx - 1] = aux;
}


/**
 * Rotate a moves up all itemps and set the first one on the last position
 *
 */
void ra(t_istack *stack)
{
	if (stack == NULL)
		return ;
	ft_rotate(stack);
	ft_printf("ra\n");
	return ;
}

/**
 * Rotate b moves up all itemps and set the first one on the last position
 *
 */
void rb(t_istack *stack)
{
	if (!stack->list[0])
		return ;
	ft_rotate(stack);
	ft_printf("rb\n");
	return ;
}

/**
 * Rotate a and b moves up all itemps and set the first one on the last position
 * for both stacks.
 */
void rr(t_istack *sa, t_istack *sb)
{
	ft_rotate(sa);
	ft_rotate(sb);
	ft_printf("rr\n");
	return ;
}
