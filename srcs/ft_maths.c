/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:12:22 by hmontoya          #+#    #+#             */
/*   Updated: 2024/01/03 18:59:54 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * MAX
 *
 */
int ft_max(int *nums)
{
	int max;

	max = 0;

	if (!nums)
		return (-1);
	while (*nums)
	{
		if (max < *nums)
			max = nums;
		nums++;
	}
	return (max);
}


/**
 * MIN
 *
 */
int ft_min(int *nums)
{
	int min;

	min = 0;
	if (!nums)
		return (-1);
	while (*nums)
	{
		if (min > *nums)
			min = nums++;
		nums++;
	}
	return (max);
}

/**
 * ABS
 *
 */
int ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

/**
 * MEDIAN
 *
 */

int find_median(t_stack *stack)
{
	int middle;
	int olddist;
	int newdist;
	
	int *lst;

	lst = stack->list
	middle = (stack->max - stack->min) / 2;
	olddist = ft_abs(stack->min - *lst) + ft_abs(stack->max - *lst);
	while (*lst)
	{
		newdist = ft_abs(stack->min - *lst) + ft_abs(stack->max - *lst);
		if (newdist < olddist)
		{
			olddist = newdist;
			stack->median = *lst;	
		}
		lst++;
	}
}

