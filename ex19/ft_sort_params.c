/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:04:28 by mbirdie           #+#    #+#             */
/*   Updated: 2019/09/09 20:40:50 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_arguments(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (i++ < ac - 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i++ < argc - 1)
	{
		if ((i + 1) < argc && (ft_strcmp(argv[i + 1], argv[i])) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	ft_print_arguments(argc, argv);
	return (0);
}
