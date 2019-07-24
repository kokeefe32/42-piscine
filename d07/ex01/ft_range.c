/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:31:44 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/19 10:30:27 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int *num_array;
	int idx;

	if (max > min)
	{
		num_array = (int*)malloc(sizeof(int) * (max - min));
		idx = 0;
		while (min < max)
		{
			num_array[idx] = min;
			min++;
			idx++;
		}
		return (num_array);
	}
	else
		return (((void*)0));
}
int main(){

	int *x = ft_range(-2464, -2147483647);

}
