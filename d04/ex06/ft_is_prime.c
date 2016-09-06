/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 22:34:10 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/03 22:59:12 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	current_div;
	int	div_found;
	int	max_div;

	if (nb < 3)
		return (0);
	current_div = 2;
	div_found = 0;
	max_div = nb / 2;
	while (div_found == 0 && current_div <= max_div)
	{
		if (nb % current_div == 0)
			div_found = 1;
		current_div++;
	}
	return (div_found == 0 ? 1 : 0);
}
