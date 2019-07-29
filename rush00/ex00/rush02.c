/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeopark <jeopark@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:44:58 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/14 21:15:06 by jeopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	while (++row <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if (col == 1 || col == x)
			{
				if (row == 1)
					ft_putchar('A');
				else if (row == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
