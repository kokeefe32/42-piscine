/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:52:41 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 17:01:16 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	is_upper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lower(str[i]) && !is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}