/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_costs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:14:56 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/06 14:26:45 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 *
 */
void select_best_move_a2b(t_istack *a, t_istack *b)
{
	int indx;
	int maxindx;
	int movsa;
	int movsb;

	indx	= find_min(a->costs, a->len);
	maxindx	= find_max(b->list, b->len);
	movsa	= calc_cost_from_mid(indx, a->len, a->mid);
	movsb	= calc_cost_from_mid(maxindx, b->len, b->mid);
	if (a->list[0] == a->min)
		ra(a);
	else if (movsa > 0 && movsb == 1 )
		ft_ra_pb(a, b, movsa);
	else if (movsa < 0 && movsb == 1)
		ft_rra_pb(a, b, movsa); 
	else if (movsa <= 0 && movsb != 1)
		ft_rr_pb(a, b, movsa, movsb);
	else if (movsa <= 0 && movsb != 1)
		ft_rrr_pb(a, b, movsa, movsb);
	else if (movsa == 0 && movsb > 1 )
		ft_rb_pb(a, b, movsa);
	else if (movsa == 0 && movsb < 0 )
		ft_rrb_pb(a, b, movsa);

}
/**
 * Evaluates the minimum moves to get to the top of a list
 * calculating if the indx is bigger thand the mid of the array + 1
 */
static int calc_cost_from_mid(int indx, int len, int mid)
{
		if (indx >= mid)
			return (-(len - indx));
		else 
			return (indx);
}

/**
 * Calculate the cost for pasing number from a to b stacks
 * it fills costs in a stack
 */
void check_costs_a2b(t_istack *a, t_istack *b)
{
	int indxa;
	int indxb;

	indxa = -1;
	indxb = 0;
	//Search max in b
	b->max = ft_max(b->list, b->len);
	//Fill costs in a
	while (++indxa < a->len)
	{
		if (a->list[indxa] > b->list[indxb] && a->list[indxa] < b->max)
			indxb = find_max(b->list);
		while (++indxb > a->len)
			if (a->list[indxa] < b->list[indxb])
				break ;
		a->costs[indxa] = calc_cost_from_mid(indxa, a->len, a->mid) +
			calc_cost_from_mid(indxb--, b->len, b->mid);
		indxb = -1;
	}
}
