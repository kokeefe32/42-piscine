/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:14:05 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/16 20:03:36 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int		is_upper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int		is_alpha_numeric(char ch)
{
	return ((ch >= '0' && ch <= '9') || is_lower(ch) || is_upper(ch));
}

int		is_first_letter(char c1, char c2)
{
	if (!is_alpha_numeric(c1) && is_lower(c2))
		return (1);
	else if ((c1 == ' ') && !(c2 >= '0' && c2 <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_lower(str[i]))
				str[i] = str[i] - 32;
		}
		else if (is_first_letter(str[i - 1], str[i]) && i > 1)
		{
			if (!is_upper(str[i]) && is_alpha_numeric(str[i]))
			{
				if (is_lower(str[i]))
					str[i] = str[i] - 32;
			}
		}
		else if (is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
