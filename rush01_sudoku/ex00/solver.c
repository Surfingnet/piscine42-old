/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:34:47 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:01:05 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**make_backup(int **grid);
void	restore_grid(int **grid, int **grid_backup);
void	free_grid_mem(int **grid);
int		check_all(int **grid, int x, int y, int p);

int		free_grid_and_return(int **grid, int ret)
{
	free_grid_mem(grid);
	return (ret);
}

int		rec_solver(int **grid, int x, int y, int c)
{
	int	i;
	int	stop;
	int	**grid_backup;

	c++;
	grid_backup = make_backup(grid);
	if (x > 8)
		return (free_grid_and_return(grid_backup, 1));
	if (grid[x][y] == 0)
	{
		i = 0;
		stop = 0;
		while (++i < 10 && !stop)
		{
			restore_grid(grid, grid_backup);
			stop = check_all(grid, x, y, i);
			grid[x][y] = i;
			stop = stop && rec_solver(grid, c / 9, c % 9, c);
		}
		return (free_grid_and_return(grid_backup, stop));
	}
	free_grid_mem(grid_backup);
	return (rec_solver(grid, c / 9, c % 9, c));
}
