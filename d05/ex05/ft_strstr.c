/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 11:30:48 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/22 12:37:48 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_len;
	int	i;
	int	offset;

	to_find_len = -1;
	while (to_find[++to_find_len])
		continue;
	if (!to_find_len)
		return (str);
	i = -1;
	while (str[++i])
	{
		offset = -1;
		while (str[i + (++offset)] == to_find[offset])
			if (offset == to_find_len - 1)
				return (str + i);
	}
	return (NULL);
}
