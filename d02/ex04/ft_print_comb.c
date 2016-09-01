/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 20:29:13 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/01 20:43:01 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int c, d, u, i;
	char c2;
	char d2;
	char u2;

	i = 0;
	while (i < 790)
	{
		c = (i / 100);
		d = ((i - (c * 100)) / 10);
		u = (i - (c * 100)) - (d * 10);
		if (c<d && d<u)
		{
			c2 = c + '0';
			d2 = d + '0';
			u2 = u + '0';
			putchar(c2);
			putchar(d2);
			putchar(u2);
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
	  }
	i++;
	}
}