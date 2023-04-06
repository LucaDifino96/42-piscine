/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:14:39 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/01 01:22:24 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i] != 0 )
	{ 
		while(str[i + j] == to_find[j] && str[i + j] != 0)
			j++;
			if (to_find[j] == 0)
				return (str +i);
			i++;
			j = 0;
		}
		return (0);
}

int main()
{
	char str[] = "jordan é il giocatore piú forte";
	char find[] = "giocatore";
	printf("%s", ft_strstr(str, find));
}
