/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:12:02 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 17:15:50 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!is_upper(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}
