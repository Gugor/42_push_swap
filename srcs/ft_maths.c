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
int ft_max(int *nums, int size)
{
	int max;

	max = 0;

	if (!nums)
		return (-1);
	while (--size >= 0)
	{
		if (max < *nums)
			max = *nums;
		nums++;
	}
	return (max);
}


/**
 * MIN
 *
 */
int ft_min(int *nums, int size)
{
	int min;

	min = 0;
	if (!nums)
		return (-1);
	while (--size >= 0)
	{
		if (min > *nums)
			min = *nums;
		nums++;
	}
	return (min);
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
