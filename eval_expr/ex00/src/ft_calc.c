/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:51:46 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/28 12:55:48 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_eval.h"

int		pre(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return (1);
	if (op == '+' || op == '-')
		return (2);
	return (0);
}

int		eval_pre1(char op, int n1, int n2)
{
	if (op == '/')
		return (n1 / n2);
	else if (op == '*')
		return (n1 * n2);
	else if (op == '%')
		return (n1 % n2);
	else
		return (n1);
}

int		eval_pre2(char op, int n1, int n2)
{
	if (op == '+')
		return (n1 + n2);
	else if (op == '-')
		return (n1 - n2);
	else
		return (n1);
}
