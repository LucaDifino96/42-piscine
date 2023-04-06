/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:29:41 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/27 18:14:02 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else 
			return (0);
	}
	return (1);
}

int main ()
{
	char a[ ] = { "Ciao" };

	printf("%d", ft_str_is_lowercase(a));
}
