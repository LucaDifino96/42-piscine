/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:29:37 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/27 18:39:47 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[1] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (str[i] >= 32  && str[i] <= 126) 
			i++;
		else
		return(0);
	}
	return(1);
}

int main ()
{
	char a[ ] = { "7Qa|#" };
   
	printf("%d", ft_str_is_printable(a));
	return (0);
}

