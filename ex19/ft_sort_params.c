/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:16:16 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/09 19:44:18 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while(str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		a;

	a = 0;
	while(s1[a] != '\0' || s2[a] != '\0')
	{
		if(s1[a] == s2[a])
			a++;
		else if(s1[a] != s2[a])
			return(s1[a] - s2[a]);
	}
	return(0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	catch_and_print(int argc, char **argv)
{
	int		a;
	int		b;

	a = 1;
	b = 0;
	while(a < (argc - 1))
	{
		if(ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			ft_swap(&argv[a], &argv[a + 1]);
			a = 1;
		}
		else
			a++;
	}
	a = 1;
	while(a <= (argc- 1))
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
}

int		main(int argc, char **argv)
{
	catch_and_print(argc, argv);
	return(0);
}
