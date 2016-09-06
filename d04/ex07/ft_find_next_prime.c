/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 23:03:34 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/03 23:12:20 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	current_div;
	int	div_found;
	int	max_div;

	if (nb < 3)
		return (2);
	current_div = 2;
	div_found = 0;
	max_div = nb / 2;
	while (div_found == 0 && current_div <= max_div)
	{
		if (nb % current_div == 0)
			div_found = 1;
		current_div++;
	}
	return (div_found == 0 ? nb : ft_find_next_prime(nb + 1));
}
