/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeopark <jeopark@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:44:58 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/14 21:14:24 by jeopark          ###   ########.fr       */
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
			if ((col == 1 || col == x) && (row == 1 || row == y))
			{
				if (col == 1 && row == 1)
					ft_putchar('/');
				else if ((col == 1 && row == y) || (col == x && row == 1))
					ft_putchar('\\');
				else if (col == x && row == y)
					ft_putchar('/');
			}
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
