/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:32:48 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/27 16:46:28 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z' && str[i] >= 'A') || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return(0);	
	}
	return (1);
}

int main ()
{
	char a[] = "Hello!";
	printf("%d", ft_str_is_alpha(a));
}

