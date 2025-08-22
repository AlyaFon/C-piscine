/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omtekbas <omtekbas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:56:03 by omtekbas          #+#    #+#             */
/*   Updated: 2022/07/25 17:00:43 by omtekbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{	
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*int		main(void)
{
	int a;
	int b;
	int *d;
	int *s;

	a = 5;
	b = 7;
	d = &a;
	s = &b;
	printf("%d, %d,",*d,*s);
	ft_ultimate_div_mod(d, s);
	printf("%d, %d",*d,*s);
}*/