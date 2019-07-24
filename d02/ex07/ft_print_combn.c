/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:19:37 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 16:23:55 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_nbr(int n)
{
	int i;
	int j;

	i = -1;
	j = digits[i];
	while (++i < n)
	{
		ft_putchar(j);
		i = i + 1;
	}
	ft_putchar('\n');
}

void	ft_print_combn(int n)
{
	int digits[n];
	int i;
	int j;
	int temp;

	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i = i + 1;
	}
	i = 0;
	j = 1;
	while (j <= n)
	{
		while (i < n - 1)
		{
			temp = digits[i];
			digits[i] = digits[i + 1];
			digits[i + 1] = temp;
			ft_print_nbr(digits, n);
			i++;
		}
		j++;
	}
}
