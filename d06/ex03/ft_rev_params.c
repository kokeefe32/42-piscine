/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:37:07 by kaokeefe          #+#    #+#             */
/*   Updated: 2019/07/17 15:10:32 by kaokeefe         ###   ########.fr       */
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

	idx = argc - 1;
	while (idx > 0)
	{
		ft_putstr(argv[idx]);
		ft_putchar('\n');
		idx--;
	}
}
