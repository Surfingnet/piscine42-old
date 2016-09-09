/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 11:29:43 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/09 16:42:51 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_space(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

int		get_word_count(char *str)
{
	int word_count;
	int i;

	word_count = 0;
	i = 0;
	while (is_space(str[i]) && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (!is_space(str[i]) && str[i] != '\0')
			i++;
		while (is_space(str[i]) && str[i] != '\0')
			i++;
		word_count++;
	}
	return (word_count);
}

char	*alloc_and_copy(char *src, int alloc_size)
{
	int i;
	char*dest;

	dest = malloc(alloc_size);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int	src_i;
	int	wrd_i;
	int	wrds_i;
	char*current_word;
	char**words_ptrs;

	words_ptrs = malloc(sizeof(char*) * get_word_count(str));
	src_i = 0;
	wrds_i = 0;
	current_word = malloc(4096);
	while (str[src_i] != '\0')
	{
		wrd_i = 0;
		while (is_space(str[src_i]) && str[src_i] != '\0')
			src_i++;
		while (!is_space(str[src_i]) && str[src_i] != '\0')
		{
			current_word[wrd_i] = str[src_i];
			wrd_i++;
			src_i++;
		}
		current_word[wrd_i] = '\0';
		words_ptrs[wrds_i++] = alloc_and_copy(current_word, wrd_i);
	}
	return (words_ptrs);
}
