/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:31:29 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/18 21:03:16 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (length + 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*src_copy;

	len = str_len(src);
	src_copy = (char*)malloc(sizeof(*src) * (len + 1));
	ft_strcpy(src_copy, src, len);
	return (src_copy);
}
