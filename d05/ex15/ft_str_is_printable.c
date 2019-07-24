/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:16:48 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 17:18:56 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((int)str[idx] == (int)'\\')
		{
			return (0);
		}
		else if ((int)str[idx] <= 31 || (int)str[idx] > 255)
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
