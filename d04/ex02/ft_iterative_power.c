/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:47:24 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/13 11:57:19 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int val;
	int exp;

	val = nb;
	exp = power;
	if (exp < 0)
	{
		return (0);
	}
	else if (exp == 0)
	{
		return (1);
	}
	while (exp > 1)
	{
		val *= nb;
		exp--;
	}
	return (val);
}
