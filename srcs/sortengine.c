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
/*
static void find_median(t_istack *stack)
{
	int i;

	i = -1;
	while(stack->list[++i])
		printf("%d, ", stack->list[i]);
	
ft_mergesort(stack->list);
	//min 
	//max
	//abs(min - current) + abs(max - current)
	//max - min / 2 = middle
	//while stack check closest to middle
	//mientras a > 3 items
		//si menor a la media
			//pb + ra
		//si mayor a la media
			//pb 
				//si 1 < 2 
					//sb		
		//si igual a la mediana
			//si b > mediana
				//pb
			//si b < mediana
				//ra
				//pb
}
*/
static void stack_sort(t_istack *a, t_istack *b)
{
	if (is_sorted(a))
		exit(1);
	a->max = ft_max(a->list);
	a->min = ft_min(a->list);
	pb(b, a);
	print_stack(a);
	print_stack(b);
	pb(b, a);
	print_stack(a);
	print_stack(b);
	ft_reverse(a);
	print_stack(a);
	print_stack(b);
/*
	while (a->len > 3)
	{
		
	}
*/	
}
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
