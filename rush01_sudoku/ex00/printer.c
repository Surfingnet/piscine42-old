/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:41:56 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 22:47:43 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	charfromint(int i)
{
	return (i + '0');
}

void	printer(int **grid)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			ft_putchar(charfromint(grid[i][j]));
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
