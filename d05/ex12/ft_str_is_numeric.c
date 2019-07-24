/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:03:18 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 17:05:34 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!is_char_numeric(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}
