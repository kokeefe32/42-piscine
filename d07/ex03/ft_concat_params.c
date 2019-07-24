/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:34 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 11:00:48 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		str_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;
	while (*dest != '\0')
		dest++;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int		len_to_allocate(char **str_array, int len)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i++ < len - 1)
		sum += str_len(str_array[i]);
	return (sum + len);
}

char	**ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		len;
	int		i;

	len = len_to_allocate(argv, argc);
	result = (char*)malloc(sizeof(char) * len);
	i = 0;
	while (i++ < argc - 1)
	{
		ft_strcpy(result, argv[i]);
		if (i != argc - 1)
			ft_strcpy(result, "\n");
	}
	result[len - 1] = '\0';
	return (result);
}


