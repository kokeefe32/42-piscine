/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:02:32 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/28 13:04:06 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_io.h"
#include "../includes/ft_eval.h"

void	increment_ptr(char **in)
{
	while (**in == ' ')
		(*in)++;
}

int		nums(char **in)
{
	int n;

	increment_ptr(in);
	if (**in == '(')
	{
		(*in)++;
		n = sum(in);
		if (**in == ')')
			(*in)++;
		return (n);
	}
	return (ft_atoi(in));
}

int		fac(char **in)
{
	int		n1;
	int		n2;
	char	op;

	n1 = nums(in);
	while (**in)
	{
		increment_ptr(in);
		op = **in;
		if (pre(op) != 1)
			return (n1);
		(*in)++;
		n2 = nums(in);
		n1 = eval_pre1(op, n1, n2);
	}
	return (n1);
}

int		sum(char **in)
{
	int		n1;
	int		n2;
	char	op;

	n1 = fac(in);
	while (**in)
	{
		increment_ptr(in);
		op = **in;
		if (pre(op) != 2)
			return (n1);
		(*in)++;
		n2 = fac(in);
		n1 = eval_pre2(op, n1, n2);
	}
	return (n1);
}

int		eval_expr(char *in)
{
	return (sum(&in));
}
