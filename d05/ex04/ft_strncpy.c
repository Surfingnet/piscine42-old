/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:36:11 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/21 19:34:25 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	dest_len;
	int	src_len;

	dest_len = -1;
	while (dest[++dest_len])
		continue;
	if (n > dest_len)
		return ("");
	src_len = -1;
	while (src[++src_len])
		continue;
	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	i--;
	while (++i < dest_len)
		dest[i] = '\0';
	return (dest);
}
