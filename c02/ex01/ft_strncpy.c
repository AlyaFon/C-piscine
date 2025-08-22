/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omtekbas <omtekbas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:41:24 by omtekbas          #+#    #+#             */
/*   Updated: 2022/07/31 01:10:13 by omtekbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";
	char dest1[] = "World2";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest1, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", strncpy(dest1, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 7));
	printf("%s", strncpy(dest1, src, 7));
}*/