/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omtekbas <omtekbas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:16:02 by omtekbas          #+#    #+#             */
/*   Updated: 2022/08/09 01:17:20 by omtekbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printer(int argc, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (av[i])
		{
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
			j = 0;
		}
	}
}

int	main(int argc, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argc - 1 > i)
		{
			while (av[i][j] && av[i + 1][j] && av[i][j] == av[i + 1][j])
				j++;
			if (av[i][j] > av[i + 1][j])
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
				i = 1;
			}
			else
				i++;
			j = 0;
		}
	}
	ft_printer(argc, av);
}
