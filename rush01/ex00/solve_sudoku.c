/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:23:12 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/20 17:40:41 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_col(int **arr, int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (arr[i][col] == num || arr[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_box(int **arr, int row, int col, int num)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	x = row - (row % 3);
	y = col - (col % 3);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (arr[x + i][y + j] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_placement(int **arr, int row, int col, int num)
{
	if (num == 0)
		return (1);
	if (check_box(arr, row, col, num) && check_row_col(arr, row, col, num))
	{
		return (1);
	}
	return (0);
}
