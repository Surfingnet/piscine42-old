/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:55:04 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/19 20:01:45 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i, j;
	if (nb < 2)
		return (0);
	for (i = 2; i <= nb / 2; i++)
	{
		if ((i * 2) > nb)
			return (1);
		for (j = i; j <= nb / 2; j++)
		{
			if ((i * j) == nb)
				return (0);
			if ((i * j) > nb)
				break;
		}
	}
	return (1);
}
