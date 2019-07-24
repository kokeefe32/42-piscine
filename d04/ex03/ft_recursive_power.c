/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:01:15 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/13 12:07:01 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_helper(int nb, int power)
{
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power_helper(nb, power - 1));
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (ft_recursive_power_helper(nb, power));
}
