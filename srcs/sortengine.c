/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortengine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:53:32 by hmontoya          #+#    #+#             */
/*   Updated: 2023/12/19 16:02:08 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void three_sort(t_istack *a)
{

	if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[0] < a->list[2]) // 1 3 2
	{
		sa(a);
		ra(a);
	}
	else if (a->list[0] > a->list[1] && a->list[1] > a->list[2] && a->list[0] > a->list[2]) // 3 2 1
	{
		rra(a);
		rra(a);
	}	
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[0] > a->list[2]) // 3 1 2
		ra(a);
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[0] < a->list[2]) // 2 1 3   
		sa(a);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[0] > a->list[2]) // 2 3 1
		rra(a);

	print_stack(a);
	return ;
}

static void five_sort(t_istack *a)
{
	a = NULL;
	return ;
}

void push_swap(t_istack *a, t_istack *b)
{
	b = NULL; // BORARRARARARAR !!!!!
	if (a->len == 1)
		return ;
	if (a->len == 3)
	{
		three_sort(a);
		return ;
	}
	if (a->len <= 5)
	{
		five_sort(a); // TODO
		return ;
	}
}
