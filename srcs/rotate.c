#include "../includes/push_swap.h"

/**
 *  Rorate move up all items in a stack and first becomes last
 *
 */
void ft_rotate(int *stack)
{
	int aux;
	int indx;
	int len;
	if (!stack[0])
		return ;
	aux = stack[0];
	indx = -1;
	len = ft_len(stack);
	while ( ++indx < len)
		stack[indx] = stack[indx + 1];
	stack[indx - 1] = aux;
}


/**
 * Rotate a moves up all itemps and set the first one on the last position
 *
 */
void ra(int *stack)
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
void rb(int *stack)
{
	if (!stack[0])
		return ;
	ft_rotate(stack);
	ft_printf("ra\n");
	return ;
}

/**
 * Rotate a and b moves up all itemps and set the first one on the last position
 * for both stacks.
 */
void rr(int *sa, int *sb)
{
	ft_rotate(sa);
	ft_rotate(sb);
	ft_printf("rr\n");
	return ;
}
