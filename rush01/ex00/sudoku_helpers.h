/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:29:39 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/20 20:49:32 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_HELPERS_H
# define SUDOKU_HELPERS_H
# include <stdlib.h>
# include "ft_helpers.h"

int		**generate_board(char **input);
void	print_board(int **input);
int		is_number(char c);
int		is_dot(char c);
int		validate_input(int x, char **argv);

#endif
