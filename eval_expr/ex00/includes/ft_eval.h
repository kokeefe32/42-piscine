/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 09:34:09 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/28 13:00:32 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H

int		eval_expr(char *exp);
int		sum(char **exp);
int		fac(char **exp);
int		num(char **exp);
int		pre(char op);
int		eval_pre1(char op, int n1, int n2);
int		eval_pre2(char op, int n1, int n2);

#endif
