/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 09:46:23 by mghazari          #+#    #+#             */
/*   Updated: 2020/06/09 10:33:04 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int f;

	if (nb < 0)
		return (0);
	f = 1;
	while (nb > 1)
		f *= nb--;
	return (f);
}
