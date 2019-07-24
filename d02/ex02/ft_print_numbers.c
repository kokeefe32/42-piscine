/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:09:12 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/24 16:22:09 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int digit;

	digit = 9;
	while (digit >= 0)
	{
		ft_putchar(digit);
		digit = digit - 1;
	}
}
