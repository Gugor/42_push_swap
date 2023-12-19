/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortengine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:53:32 by hmontoya          #+#    #+#             */
/*   Updated: 2023/12/19 16:20:08 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void three_sort(t_istack *a)
{
	int *list;

	list = a->list;
	/*
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
	{
		ft_printf(a->list);
		ra(a);
	}
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[0] < a->list[2]) // 2 1 3   
		sa(a);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[0] > a->list[2]) // 2 3 1
		rra(a);
		*/
	if (list[0] < list[1] && list[1] > list[2] && list[0] < list[2]) // 1 3 2
	{
		ft_printf("[%d,%d,%d]\n",list[0], list[1],list[2]);
		sa(a);
		ra(a);
	}
	else if (list[0] > list[1] && list[1] > list[2] && list[0] > list[2]) // 3 2 1
	{
		ft_printf("[%d,%d,%d]\n",list[0], list[1],list[2]);
		rra(a);
		rra(a);
	}	
	else if (list[0] > list[1] && list[1] < list[2] && list[0] > list[2]) // 3 1 2
	{
		ft_printf("[%d,%d,%d]\n",list[0], list[1],list[2]);
		ra(a);
	}
	else if (list[0] > list[1] && list[1] < list[2] && list[0] < list[2]) // 2 1 3   
	{
		ft_printf("[%d,%d,%d]\n",list[0], list[1],list[2]);
		sa(a);
	}
	else if (list[0] < list[1] && list[1] > list[2] && list[0] > list[2]) // 2 3 1
	{
		ft_printf("[%d,%d,%d]\n",list[0], list[1],list[2]);
		rra(a);
	}
		
	ft_printf(":: Sorted a(%p)->%d(0)\n", a, a->list[0]);
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
