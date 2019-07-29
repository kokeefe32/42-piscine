/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:35:20 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/20 20:35:23 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_SUDOKU_H
# define SOLVE_SUDOKU_H

int is_valid_placement(int **arr, int row, int col, int num);
int check_box(int **arr, int row, int col, int num);
int check_row_col(int **arr, int row, int col, int num);

#endif
