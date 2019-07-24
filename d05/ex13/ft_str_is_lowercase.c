/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:07:07 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 17:10:04 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!is_lower(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}
