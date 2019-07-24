/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:31:51 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/12 14:35:44 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	factorial = 1;
	i = nb;
	while (i > 0)
	{
		factorial = factorial * i;
		i--;
	}
	return (factorial);
}
