/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:52:20 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/08 16:01:27 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	return (*s1);
}

int	ft_len(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_len(strs, sep, size);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(result, strs[i]);
		result += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result, sep);
			result += ft_strlen(sep);
		}
		i++;
	}
	*result = 0;
	result = result - len;
	return (result);
}
