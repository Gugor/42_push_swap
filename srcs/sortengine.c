/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortengine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:53:32 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/03 18:44:26 by hmontoya         ###   ########.fr       */
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

static void find_median(t_stack *stack)
{
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
			I	//pb
			//si b < mediana
				//ra
				//pb
}

static void stack_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		exit(1);
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
	if (a->len > 3)
	{
		stack_sort(a); // TODO
		return ;
	}
}
