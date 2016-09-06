/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:52:35 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/06 12:14:04 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		stop;
	int		i;
	int		output;
	int		sign;
	char*	nbstr;

	nbstr = "0123456789";
	output = 0;
	stop = 0;
	sign = *str == 0x2D ? (-1) : 1;
	if (sign == (-1))
		str++;
	while (*str != '\0' && !stop)
	{
		i = -1;
		stop = 1;
		while (++i < 11)
			stop = *str == nbstr[i] ? 0 : stop;
		if (!stop)
			output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}
