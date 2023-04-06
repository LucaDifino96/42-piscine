/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_print_alphabet.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:33:44 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/23 01:43:41 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char	ch	;

	ch = 'a' ;
	while (ch <= 'z')
	{
		write(1, &ch, 1);
		ch += 1 ;
	}
	return ;
}
