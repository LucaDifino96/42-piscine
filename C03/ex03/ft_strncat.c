/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:44:06 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/01 00:13:08 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp;

	temp = dest;
	while (*dest != 0)
	{
		dest++;
	}
	unsigned int i;

	i = 0;
	while (*src != 0 && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (temp);
}

int main()
{
	char a[100] = { "Porco, " };
	char b[ ] = { "Rosso!!!!"};
	int k = 3;

	printf("%s", ft_strncat(a, b, k));
	return (0);
}
