/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:31:43 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/22 15:41:46 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
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
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		ft_atoi(char *str)
{
	int val;
	int sign;

	val = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\r' || *str == '\v')
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 0;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10;
		val = (sign ? val + (*str - '0') : val - (*str - '0'));
		str++;
	}
	return (val);
}
