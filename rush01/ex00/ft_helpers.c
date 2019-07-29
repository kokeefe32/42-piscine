/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:06:56 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/20 14:23:21 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helpers.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_puterr(void)
{
	ft_putstr("Error\n");
}

void	ft_putarr(int *arr)
{
	unsigned long i;

	i = 0;
	while (i < sizeof(arr) + 1)
	{
		ft_putnbr(arr[i]);
		if (i != 8)
			ft_putchar(' ');
		i++;
	}
}
