/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:30:11 by ldifino           #+#    #+#             */
/*   Updated: 2023/03/02 19:02:22 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_space(char *str)
{
	int	i;

	i = 0;
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_space2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	segno;
	int	nb;

	i = 0;
	segno = 1;
	nb = 0;
	while (ft_is_space(str[i]) || ft_is_space2(str[i]))
	{
		i ++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			segno *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i ++;
	}
	nb *= segno;
	return (nb);
}	
