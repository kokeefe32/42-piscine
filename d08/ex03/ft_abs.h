/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:33:31 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 14:38:11 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ft_abs(Value)

int	ft_abs(int val)
{
	if (val == -2147483648)
		return (0);
	else if (val < 0)
		return (-val);
	else
		return (val);
}
#endif
