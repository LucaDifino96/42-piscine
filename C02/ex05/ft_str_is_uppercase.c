/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:15:40 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/27 18:27:34 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
		return(1);
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int main ()
{
	char a[ ] = { "HELLO" };

	printf("%d", ft_str_is_uppercase(a));
	return (0);
}
