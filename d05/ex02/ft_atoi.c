/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:10:08 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/15 09:27:49 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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
