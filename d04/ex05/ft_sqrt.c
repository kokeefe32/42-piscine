/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:27:50 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/13 14:32:37 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_get_sqrt(double nb)
{
	double temp;
	double sqrt;

	temp = 0.0;
	sqrt = nb / 2 + 1;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	return (sqrt);
}

int		ft_sqrt(int nb)
{
	double sqrt;

	sqrt = ft_get_sqrt((double)nb);
	if (sqrt * sqrt == (double)nb)
		return (sqrt);
	else
		return (0);
}
