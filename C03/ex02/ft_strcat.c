/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:43:29 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/28 23:00:30 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest !=  0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (temp);
}
int main ()
{
	char a[100] = {"hello, "};
	char b[ ] = {"world!"};
	printf("%s", ft_strcat(a, b));
	return (0);
}
