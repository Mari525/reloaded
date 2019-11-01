/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:32:31 by mbirdie           #+#    #+#             */
/*   Updated: 2019/09/07 17:35:08 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		ft_display(char *ar)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		size;

	size = 0;
	fd = open(ar, O_RDONLY);
	if (fd < 0)
		return (0);
	while ((size = read(fd, buf, BUF_SIZE)))
		write(1, buf, size);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_display(argv[1]);
	return (0);
}
