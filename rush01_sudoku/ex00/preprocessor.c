/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocessor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 20:26:03 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:17:46 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_all(int **grid, int x, int y, int p);

int	empty_grid_check(int **grid)
{
	int x;
	int y;
	int tmp;
	int ok;

	ok = 1;
	x = -1;
	while (++x < 9 && ok)
	{
		y = -1;
		while (++y < 9 && ok)
		{
			if (grid[x][y] != 0)
			{
				tmp = grid[x][y];
				grid[x][y] = 0;
				if (!check_all(grid, x, y, tmp))
					ok = 0;
				grid[x][y] = tmp;
			}
		}
	}
	return (ok);
}

int	check_params(int param_count, const char *param_array[])
{
	int param;
	int i;
	int j;
	int ok;

	if (param_count != 10)
		return (0);
	param = 0;
	ok = 1;
	while (++param < 10 && ok)
	{
		i = -1;
		while (++i < 10 && ok)
		{
			ok = 0;
			j = -1;
			while (++j < 11)
				if (param_array[param][i] == ".123456789"[j])
					ok = 1;
		}
	}
	return (ok);
}

int	enough_entries(int **grid)
{
	int	i;
	int	j;
	int c;

	c = 0;
	i = -1;
	while (++i < 9 && c < 17)
	{
		j = -1;
		while (++j < 9 && c < 17)
			if (grid[i][j] != 0)
				c++;
	}
	return (c < 17 ? 0 : 1);
}
