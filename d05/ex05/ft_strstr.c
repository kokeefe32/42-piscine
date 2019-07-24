/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:26:30 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 13:02:49 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + j) != '\0')
	{
		i = 0;
		while (*(str + j + i) == *(to_find + i))
		{
			if (*(to_find + i + j) == *(to_find + i))
				return (str + j);
			i++;
		}
		j++;
	}
	return (0);
}
