/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:07 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 10:53:37 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *num_array;
	int idx;

	if (max > min)
	{
		idx = 0;
		num_array = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			num_array[idx] = min;
			min++;
			idx++;
		}
		*range = num_array;
		return (idx);
	}
	else
	{
		*range = ((void*)0);
		return (0);
	}
}
