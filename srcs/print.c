/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:30:08 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/03 15:28:45 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void print_stacks(t_istack *stacka, t_istack *stackb)
{
    int indx;
    int item;

    if(!stacka || !stackb)
        return ;
    indx = -1;
    item = 0;
    ft_printf("____ ____\n");
    ft_printf("| a | b |\n");
    ft_printf("---- ----\n");
    while(++indx < stacka->len)
    {
        if(indx >= stacka->len && indx >= stackb->len )
            ft_printf("|   |   |\n");
        else if(indx >= stacka->len && indx < stackb->len)
            ft_printf("|   | %d |\n", stackb->list[indx]);
        else if(indx < stacka->len  && indx >= stackb->len)
            ft_printf("| %d |   |\n", stacka->list[indx]);
        else if(indx < stacka->len  && indx < stackb->len )
            ft_printf("| %d  | %d |\n", stacka->list[indx], stackb->list[indx]);
    }
    ft_printf("____ ____\n");
}

void print_costs(t_istack *stack)
{
	int indx;

	if (!stack | !stack->costs)
		return ;
	indx = -1;
	ft_printf(":: Costs [");
	while (++indx < stack->len)
		ft_printf("%d ", stack->costs[indx]);
	ft_printf("]\n");
}

void print_stack(t_istack *stck)
{
	int i;

	if(!stck || !stck->list || !stck->list[0])
		return ;
	i = - 1;
	ft_printf("[ ");
	while (stck->list[++i])
		ft_printf("%d ", stck->list[i]);
	ft_printf("]\n");
	return ;
}
