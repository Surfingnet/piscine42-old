/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 23:41:22 by mghazari          #+#    #+#             */
/*   Updated: 2016/09/07 23:42:38 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int n;

	n = 0;
	while (n < argc)
	{
		if (n != 0)
		{
			ft_print_params(argv[n]);
			ft_putchar('\n');
		}
		n++;
	}
	return (0);
}
