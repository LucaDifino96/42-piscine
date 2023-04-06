/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:17:02 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/23 03:17:22 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int string;
	char* ptr;

	string = 0;
	ptr = str;
	while(*ptr != '\0')
	{
		ptr++;
		string++;
	}	
	write(1, str, string);
}
int main(void)
{
	char ciao[ ] = "hello";
	ft_putstr(ciao);
return (0);	
}
