/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:26:44 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 14:58:06 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char bt;
	const unsigned char *mem;

	i = 0;
	bt = (unsigned char)c;
	mem = (const unsigned char *)s;
	while (i < n)
	{
		if (mem[i] == bt)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "hello";
	char *ptr = ft_memchr(s, 'l', 5);
	if (ptr)
		printf("Found: %s\n", ptr);
	else
		printf("Not found\n");
}
*/