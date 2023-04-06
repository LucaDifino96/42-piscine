/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:58:17 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/28 00:46:40 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}

char	upper(char cr)
{
	if (check(cr) == 1)
		cr -= 32;
	return (cr);
}

char	lower(char letter)
{
	if (check(letter) == 2)
		letter += 32;
	return (letter);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (first && check(str[i]))
		{
			str[i] = upper(str[i]);
			first = 0;
			i ++;
		}
		else if (!check(str[i]))
		{
			first = 1;
			i ++;
		}
		else
		{
			str[i] = lower(str[i]);
			i ++;
		}
	}
	return (str);
}
int main ()
{
	char a[ ] = { "ciao, come stai?" };

	printf("%s", ft_strcapitalize(a));
	return(0);
}
