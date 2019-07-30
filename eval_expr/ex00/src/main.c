/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 16:33:19 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/28 13:04:33 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_io.h"
#include "../includes/ft_eval.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
