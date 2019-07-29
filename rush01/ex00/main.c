/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:54:31 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/21 11:08:09 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_helpers.h"
#include "solve_sudoku.h"
#include <stdlib.h>
#include <unistd.h>

int		solve(int **arr, int num)
{
	int i;
	int j;
	int k;

	i = 1;
	j = num / 9;
	k = num % 9;
	if (num == 81)
		return (1);
	if (arr[j][k] != 0)
		return (solve(arr, num + 1));
	while (i < 10)
	{
		if (is_valid_placement(arr, j, k, i))
		{
			arr[j][k] = i;
			if (solve(arr, num + 1))
				return (1);
			else
				arr[j][k] = 0;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int **board;

	if (!validate_input(argc - 1, &argv[1]))
	{
		ft_puterr();
		return (0);
	}
	board = generate_board(&argv[1]);
	if (solve(board, 0))
		print_board(board);
	else
		ft_puterr();
	return (0);
}
