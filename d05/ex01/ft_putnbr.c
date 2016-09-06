/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:01:02 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/06 18:09:51 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	minus;
	int		i;
	int		cutter;
	char	cookie;

	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		minus = '\x002D';
		ft_putchar(minus);
	}
	cutter = 1;
	while (nb / (cutter * 10) > 0)
		cutter *= 10;
	i = 1;
	while (i)
	{
		cookie = (nb / cutter) + '0';
		ft_putchar(cookie);
		nb -= (nb / cutter) * cutter;
		i = cutter < 10 ? 0 : 1;
		cutter /= 10;
	}
}
