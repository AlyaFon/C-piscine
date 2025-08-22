/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omtekbas <omtekbas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:03:20 by omtekbas          #+#    #+#             */
/*   Updated: 2022/07/25 14:05:37 by omtekbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int	main()
{
	int d;
	int s;
	ft_div_mod(12, 4, &d, &s);
	printf("A/B=%d, A/B'den kalan=%d\n", d, s);
	return (0);
}*/