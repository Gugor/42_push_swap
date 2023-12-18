#include "../includes/push_swap.h"

void ft_push(int *from, int *to)
{
	int len;

	len = ft_len(from);
	ft_reverse(to);
	to[0] = from[0];
	ft_rotate(from);
	from[len-1] = '\0';
}

/**
 * Push first value of stack b in first position of stack a
 *
 */
void pa(t_istack sa, t_istack sb)
{
	if (!sb[0])
		return ;
	ft_push(sb, sa);
	ft_printf("pa\n");
	return ;
}

/**
 * Push first value of stack a in first position of stack b
 *
 */
void pb(t_istack sb, t_istack sa)
{
	if (!sa[0])
		return ;
	ft_push(sa, sb);
	ft_printf("pb\n");
	return ;
}
