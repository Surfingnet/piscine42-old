/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 08:24:11 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/11 23:29:25 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**grid_init(char **lines);
char	**lines_init(const char *args[]);
int		check_all(int **grid, int x, int y, int p);
int		empty_grid_check(int **grid);
int		check_params(int param_count, const char *param_array[]);
int		enough_entries(int **grid);
int		rec_solver(int **grid, int x, int y, int c);
void	ft_putstr(char *str);
void	printer(int **grid);
void	free_grid_mem(int **grid);

int		main(int argc, const char *argv[])
{
	char**lines;
	int	**grid;

	if (!check_params(argc, argv))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	lines = lines_init(argv);
	grid = grid_init(lines);
	if (!empty_grid_check(grid) || !enough_entries(grid))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	rec_solver(grid, 0, 0, 0);
	printer(grid);
	free_grid_mem(grid);
	return (0);
}
