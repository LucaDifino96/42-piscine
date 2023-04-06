/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:47:45 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/08 16:02:44 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*mal;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	mal = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min <= max)
	{
		mal[i] = min;
		i++;
		min++;
	}
	*range = mal;
	return (size);
}
