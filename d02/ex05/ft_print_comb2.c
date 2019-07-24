/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:04:47 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 16:23:14 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_digit(int num)
{
	if (num < 10)
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
	else
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

void	ft_print_numbers(int num1, int num2)
{
	ft_print_digit(num1);
	ft_putchar(' ');
	ft_print_digit(num2);
	if (num1 != 98 || num2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (i != j)
			{
				ft_print_numbers(i, j);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	ft_putchar('\n');
}
