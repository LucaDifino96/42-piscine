/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:46:49 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/27 17:26:50 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >='0' && str[i]	<= '9')
			i++;
		else
			return(0);
	}
	return(1);
}
int main ()
{
	char a[] = { "3768" };

	printf("%d", ft_str_is_numeric(a));
	return(0);
}
