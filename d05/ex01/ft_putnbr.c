/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 08:40:41 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/20 10:14:38 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	tmp, size;

	size = 1;
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('\x002D');
	}
	tmp = nb;
	while (tmp /= 10)
		size *= 10;
	tmp = nb;
	while (size)
	{
		ft_putchar((char)((tmp / size) + 48));
		tmp %= size;
		size /= 10;
	}

}
