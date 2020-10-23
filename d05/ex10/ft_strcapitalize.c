/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 12:11:33 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/23 13:23:12 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((i == 0) && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
			continue;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			if (!((str[i - 1] >= 'a') && (str[i - 1] <= 'z')))
				if (!((str[i - 1] >= 'A') &&
(str[i - 1] <= 'Z')))
					if (!((str[i - 1] >= '0') &&
(str[i - 1] <= '9')))
						str[i] -= 32;
	}
	return (str);
}
