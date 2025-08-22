/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omtekbas <omtekbas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:24:23 by omtekbas          #+#    #+#             */
/*   Updated: 2022/07/21 17:27:34 by omtekbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	pos;
	char	neg;

	neg = 'N';
	pos = 'P';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
