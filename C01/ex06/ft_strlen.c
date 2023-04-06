/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:56:06 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/23 03:15:06 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int string;

	string = 0;
	while(str[string] != '\0')
	{
		string++;
	}
	return(string);
}

int main(void)
{
	char a[ ] = "hello";
	int i;

	i = ft_strlen(a);
	printf("%d\n", i);
	return (0);
}
