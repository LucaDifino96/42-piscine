/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:58:29 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/28 19:30:15 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i]  && s2[i]) && ( s1[i] < n && s2[i] < n)) 
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}

int main ()
{
	char a[ ] = {"ciao"};
	char b[ ] = {"ciAo"};
	int k = 1;

	printf("%d", ft_strncmp(a, b, k));
	return (0);
}
