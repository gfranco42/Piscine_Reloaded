/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:56:48 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/11 09:58:46 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		a;

	a = 0;

	while(str[a] != '\0')
		a++;
	return(a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		a;

	a = 0;
	while(src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*dest;

	a = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (a - 1));
	ft_strcpy(dest, src);
	free(dest);
	return (dest);
}
