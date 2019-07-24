/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 08:54:57 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 11:30:23 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int num_words;
	int i;

	num_words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
		{
			num_words++;
			while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
					&& str[i])
				i++;
		}
	}
	return (num_words);
}

void	ft_allocate_strings(char *str, char **array, int word_len)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	word_len = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		word_len = 0;
		while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				&& str[i])
		{
			word_len++;
			i++;
		}
		if (word_len != 0)
		{
			word = (char*)malloc((sizeof(char) * (word_len + 1)));
			array[j] = word;
			j++;
		}
	}
}

void	ft_fill_strings(char *str, char **array)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
		{
			k = 0;
			while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
					&& str[i])
			{
				array[j][k++] = str[i++];
			}
			array[j][k] = '\0';
			j++;
		}
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		num_words;
	char	**result;

	num_words = ft_count_words(str);
	result = (char**)malloc((sizeof(char*) * num_words) + sizeof(0));
	if (num_words > 0)
	{
		ft_allocate_strings(str, result, 0);
		ft_fill_strings(str, result);
		result[num_words] = 0;
	}
	else
		result[0] = 0;
	return (result);
}
