/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 13:19:22 by mghazari          #+#    #+#             */
/*   Updated: 2020/06/01 13:49:51 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb)
{
	int exp, tmp;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	exp = 1;
	tmp = nb;
	while ((tmp /= 10) != 0)
		exp *= 10;
	tmp = nb;
	while (exp)
	{
		ft_putchar((char)((tmp / exp)) + 48);
		tmp %= exp;
		exp /= 10;
	}
}
