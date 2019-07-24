/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:37:56 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/17 15:11:04 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void	ft_swap_in_array(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

int		main(int argc, char **argv)
{
	int idx;

	if (argc > 1)
	{
		idx = 1;
		while (idx < argc - 1)
		{
			while (ft_strcmp(argv[idx], argv[idx + 1]) > 0)
			{
				ft_swap_in_array(&argv[idx], &argv[idx + 1]);
				idx = 1;
			}
			idx++;
		}
		idx = 1;
		while (idx < argc)
		{
			ft_putstr(argv[idx]);
			ft_putchar('\n');
			idx++;
		}
	}
	return (0);
}
