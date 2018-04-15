/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 10:45:42 by gfranco           #+#    #+#             */
/*   Updated: 2018/04/15 11:38:03 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (-1);
	}
	else if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (-1);
	}
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (-1);
		while (read(fd, &c, 1) > 0)
			write(1, &c, 1);
		close(fd);
		return (0);
	}
	return (0);
}
