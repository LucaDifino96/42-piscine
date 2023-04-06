/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:51:39 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/06 20:52:09 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	original;

	i = 1;
	original = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb *= original;
			i ++;
		}
	}
	else if (power < 0)
		return (0);
	else
		return (1);
	return (nb);
}
