/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 00:53:18 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/09 01:24:39 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour);
		printf(".00 A.M. AND %d.00 A.M.\n", hour + 1);
	}
	if (hour > 12 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", hour - 12);
		printf(".00 P.M. AND %d.00 P.M.\n", hour - 11);
	}
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	return ;
}
