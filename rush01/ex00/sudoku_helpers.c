/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:28:30 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/20 20:52:52 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helpers.h"
#include "sudoku_helpers.h"
#include <stdlib.h>
#include <unistd.h>

int		**generate_board(char **input)
{
	int **board;
	int i;
	int j;

	i = 0;
	board = (int**)malloc(sizeof(int*) * 9 + 1);
	while (i < 9)
	{
		board[i] = (int*)malloc(sizeof(int) * 9 + 1);
		j = 0;
		while (j < 9)
		{
			if (input[i][j] == '.')
				board[i][j] = 0;
			else
				board[i][j] = input[i][j] - '0';
			j++;
		}
		i++;
	}
	return (board);
}

void	print_board(int **input)
{
	unsigned long i;

	i = 0;
	while (i < sizeof(input) + 1)
	{
		ft_putarr(input[i]);
		ft_putchar('\n');
		i++;
	}
}

int		is_number(char c)
{
	return (c >= '1' && c <= '9');
}

int		is_dot(char c)
{
	return (c == '.');
}

int		validate_input(int argc, char **argv)
{
	int		row;
	int		col;
	char	cell;

	if (argc != 9)
		return (0);
	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			cell = argv[row][col];
			if (is_dot(cell) == 0 && is_number(cell) == 0)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
