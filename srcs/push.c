#include "../includes/push_swap.h"

void ft_push(t_istack *from, t_istack *to)
{

	if (!from->list[0])
		exit(EXIT_FAILURE);
	if (to->len == 0)
		to->list[0] = from->list[0];
	else
	{
		to->len++;
		to->list[to->len] = 0;
		ft_reverse(to);
		to->list[0] = from->list[0];
	}
	to->len++;
	ft_rotate(from);
	from->list[from->len - 1] = 0;
	from->len--;
	to->mid = to->len * 0.5 + 1;
	from->mid = from->len * 0.5 + 1;
}

/**
 * Push first value of stack b in first position of stack a
 *
 */
void pa(t_istack *sa, t_istack *sb)
{
	if (!sb->list[0])
		return ;
	ft_push(sb, sa);
	ft_printf("pa\n");
	return ;
}

/**
 * Push first value of stack a in first position of stack b
 *
 */
void pb(t_istack *sb, t_istack *sa)
{
	if (!sa->list[0])
		return ;
	ft_push(sa, sb);
	ft_printf("pb\n");
	return ;
}
