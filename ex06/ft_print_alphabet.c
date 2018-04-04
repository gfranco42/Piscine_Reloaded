/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:47:40 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/04 17:46:10 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char g)
{
	write(1, &g, 1);
}

void	ft_print_alphabet(void)
{
	int h;
	char g;
	h = 0;
	g = 97;

	while (h <= 25)
	{
		ft_putchar(g);
		h = h + 1;
		g = g + 1;
	}
}
