/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:49:31 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/08 23:44:47 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *concatenate(*char str1, char* str2, int total_len)
{
	int		i;
	int		jumper;
	char	*res;

	res = malloc(total_len + 1);
	if (res == NULL)
		return (NULL);
	jumper = 0;
	i = 0;
	while (str1[i] != '\0')
	{
		res[jumper] = str1[i];
		i++;
		jumper++;
	}
	i = 0;
	while (str2[i] != 0)
	{
		res[jumper] = str2[i];
		i++;
		jumper++
	}
	res[jumper] = '\0';
}

char *ft_concat_params(int argc, char **argv)
{
	char*str;
	while (argc > 1)
	{
		*argv[argc - 1] = concatenate()	
	}
}
