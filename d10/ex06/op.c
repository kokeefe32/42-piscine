/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:42:27 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/22 16:22:33 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		ft_putstr("Stop : division by zero");
}

void	ft_mod(int a, int b)
{
	if (b != 0)
		ft_putnbr(a % b);
	else
		ft_putstr("Stop : modulo by zero");
}
