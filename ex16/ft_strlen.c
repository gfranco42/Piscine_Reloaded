/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:09:13 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/05 15:35:31 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		c;
	int		a;

	a = 0;

	while (str[a] != '\0')
	{
		a = a + 1;
	}
	c = a;
	return (c);
}
