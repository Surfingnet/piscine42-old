/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_management.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:30:16 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:29:23 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**make_backup(int **grid)
{
	int **backup;
	int i;
	int j;

	backup = malloc(sizeof(int*) * 9);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		backup[i] = malloc(sizeof(int) * 9);
		while (++j < 9)
			backup[i][j] = grid[i][j];
	}
	return (backup);
}

void	restore_grid(int **grid, int **grid_backup)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			grid[i][j] = grid_backup[i][j];
	}
}

void	free_grid_mem(int **grid)
{
	int	i;

	i = -1;
	while (++i < 9)
		free(grid[i]);
	free(grid);
}
