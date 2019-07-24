/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:36:17 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/17 15:08:20 by kaokeefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int idx;

	idx = 1;
	while (idx < argc)
	{
		ft_putstr(argv[idx]);
		ft_putchar('\n');
		idx++;
	}
	return (0);
}
