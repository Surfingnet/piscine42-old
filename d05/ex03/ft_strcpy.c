/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:51:53 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/06 19:58:35 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int dest_len;
	int src_len;

	dest_len = 0;
	while (dest[dest_len++] != '\0')
		continue;
	src_len = 0;
	while (src[src_len++] != '\0')
		continue;
	i = -1;
	if (src_len > dest_len)
		return "";
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;
}

//TODO

int main(void)
{
	char str1[3] = "abc";
	char str2[3] = "def";
	ft_strcpy(str2, str1);
	printf(str2);
	return 0;
}
