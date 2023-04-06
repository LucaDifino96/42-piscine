/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 03:18:24 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/23 17:55:52 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int *i;
	int *j;
	int temp;

	i = tab;
	j = tab + size -1;
	while (i < j)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}
}

int main (void)
{
	int a[ ]  = {0, 1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(a, 7);
	printf("%d, %d, %d, %d, %d, %d,%d", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
	return 0;
}
