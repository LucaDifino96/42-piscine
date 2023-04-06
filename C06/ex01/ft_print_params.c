/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:01:50 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/05 12:51:00 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int ac, char **av)
{
	int i;

	if (ac > 0)
	{
		i = 1;
		while (av[i] != '\0')
		{
			ft_putstr(av[i]);
			i++;
		}
	}
		return (0);
}
