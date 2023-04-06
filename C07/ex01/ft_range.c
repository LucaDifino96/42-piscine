/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:22:31 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/08 14:58:12 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*mal;

	if (min >= max)
		return (0);
	size = max - min;
	mal = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		mal[i] = min;
		i++;
		min++;
	}
	mal[i] = '\0';
	return (mal);
}
