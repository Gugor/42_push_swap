/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortengine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:53:32 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/03 15:30:37 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void three_sort(t_istack *a)
{
	int *list;
	int maxindx;	

	list = a->list;
	maxindx = find_max(list);
	if (maxindx == 0)
		ra(a);
	else if (maxindx == 1)
		rra(a);
	if (list[0] > list[1])
			sa(a);
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
