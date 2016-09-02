/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 07:03:42 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/02 07:37:06 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	again;
	int tmp;

	if (size < 2)
	{
		return ;
	}
	again = 1;
	while (again == 1)
	{
		again = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				again = 1;
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
	}
}
