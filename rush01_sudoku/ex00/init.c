/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:00:32 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:03:23 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		put_in_grid(int **grid, int x, int y, char input)
{
	if (input == '.')
	{
		grid[x][y] = 0;
		return (1);
	}
	grid[x][y] = (input) - '0';
	return (1);
}

int		**grid_init(char **lines)
{
	int i;
	int j;
	int	**grid;

	grid = malloc(sizeof(int*) * 9);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		grid[i] = malloc(sizeof(int) * 9);
		while (++j < 9)
			put_in_grid(grid, i, j, lines[i][j]);
	}
	i = -1;
	while (++i < 9)
		free(lines[i]);
	free(lines);
	return (grid);
}

char	*alloc_and_copy(const char *src, int alloc_size)
{
	int		i;
	char	*dest;

	dest = malloc(alloc_size);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	**lines_init(const char *args[])
{
	char	**lines;
	int		i;

	lines = malloc(sizeof(int*) * 9);
	i = 0;
	while (++i < 10)
	{
		lines[i - 1] = alloc_and_copy(args[i], (sizeof(int) * 9));
	}
	return (lines);
}
