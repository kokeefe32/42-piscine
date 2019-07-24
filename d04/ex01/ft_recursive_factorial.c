/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:08:49 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/13 11:16:47 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial_helper(int nb, int sum)
{
	if (nb >= 1)
	{
		sum = nb * ft_recursive_factorial_helper(nb - 1, sum);
	}
	return (sum);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 1)
	{
		return (0);
	}
	return (ft_recursive_factorial_helper(nb, 1));
}
