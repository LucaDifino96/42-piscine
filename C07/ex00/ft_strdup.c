/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:46:04 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/08 14:54:21 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc(ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	return (a);
}
