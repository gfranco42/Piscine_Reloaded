/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 09:57:02 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/11 10:28:25 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		a;

	a = 0;
	if(min >= max)
		return (NULL);
	else
	{
		array = (int*)malloc(sizeof(*array) * (max - min));
		while(array[a] < max)
		{
			array[a] = min;
			a++;
			min++;
		}
		array[a] = '\0';
		free(array);
	}
	return (array);
}
