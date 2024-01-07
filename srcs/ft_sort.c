/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortengine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:53:32 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/06 14:26:58 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Sort 3 numbers
 *
 */
static void three_sort(t_istack *a)
{
	int *list;
	int maxindx;	

	list = a->list;
	maxindx = find_max(list, a->len);
	if (maxindx == 0)
		ra(a);
	else if (maxindx == 1)
		rra(a);
	if (list[0] > list[1])
			sa(a);
	return ;
}

/**
 * Sort big number list > 3
 *
 */
static void stack_sort(t_istack *a, t_istack *b)
{
	if (is_sorted(a))
		exit(1);
	a->max = ft_max(a->list, a->len);
	a->min = ft_min(a->list, a->len);
	pb(b, a);
	pb(b, a);
	check_costs_a2b(a, b);
	/*
	while (a->len > 3)
	{
				
	}*/
}

/**
 * Main function that solve the stacks
 *
 */
void push_swap(t_istack *a, t_istack *b)
{
	if (a->len == 1)
		return ;
	if (a->len == 3)
	{
		three_sort(a);
		return ;
	}
	if (a->len > 3)
	{
		stack_sort(a, b); // FACTORING
		return ;
	}
}
