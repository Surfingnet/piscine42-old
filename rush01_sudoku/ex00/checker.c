/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:15:35 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:04:06 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	square_check(int **grid, int x, int y, int p)
{
	int i;
	int j;
	int k;

	i = (x / 3) * 3 - 1;
	j = (y / 3) * 3 - 1;
	x = i + 4;
	y = j + 4;
	k = 1;
	while (++i < x)
	{
		j = y - 4;
		while (++j < y)
		{
			if (grid[i][j] == p)
				k = 0;
		}
	}
	return (k);
}

int	grid_check(int **grid, int x, int y, int p)
{
	int	i;
	int	k;

	i = -1;
	k = 1;
	while (++i < 9)
		if (grid[x][i] == p || grid[i][y] == p)
			k = 0;
	return (k);
}

int	check_all(int **grid, int x, int y, int p)
{
	int	check;

	check = grid_check(grid, x, y, p);
	if (!check)
		return (0);
	return (square_check(grid, x, y, p));
}
