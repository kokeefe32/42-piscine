/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:50:06 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/22 16:02:13 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

void	(*get_val(char *op))(int, int)
{
	if (!(ft_strcmp(op, "+")))
		return (&ft_add);
	if (!(ft_strcmp(op, "-")))
		return (&ft_sub);
	if (!(ft_strcmp(op, "*")))
		return (&ft_mult);
	if (!(ft_strcmp(op, "/")))
		return (&ft_div);
	if (!(ft_strcmp(op, "%")))
		return (&ft_mod);
	return (0);
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg2;
	void	(*eval)(int, int);

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	eval = get_val(argv[2]);
	arg2 = ft_atoi(argv[3]);
	if (eval)
		eval(arg1, arg2);
	else
		ft_putnbr(0);
	ft_putchar('\n');
}
