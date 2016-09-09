/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 16:46:53 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/08 18:28:34 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int array_len;
	int i;
	int nb;
	int	*range;

	if (min >= max)
		return (NULL);
	i = 0;
	nb = min;
	array_len = max - min;
	if (array_len < 0)
		return (NULL);
	range = malloc(array_len * 4);
	if (range == NULL)
		return (NULL);
	while (i < array_len)
		range[i++] = nb++;
	return (range);
}
