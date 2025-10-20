/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:23:53 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 19:53:24 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest == src || len == 0)
		return (dest);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[20] = "123456789";
	char str2[20] = "abcdefghi";

	printf("Before:\n");
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n\n", str2);

	// Normal copy (no overlap)
	ft_memmove(str2, str1, 5);
	printf("After copying 5 bytes from str1 to str2:\n");
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n\n", str2);

	// Overlap forward (destination after source)
	char overlap1[20] = "abcdef";
	ft_memmove(overlap1 + 2, overlap1, 4);
	printf("Overlap forward:\n");
	printf("Result: %s\n\n", overlap1);

	// Overlap backward (destination before source)
	char overlap2[20] = "abcdef";
	ft_memmove(overlap2, overlap2 + 2, 4);
	printf("Overlap backward:\n");
	printf("Result: %s\n\n", overlap2);

	// len = 0 or same pointers
	char same[20] = "hello";
	ft_memmove(same, same, 5);
	printf("Same src and dest:\n");
	printf("Result: %s\n", same);

	return 0;
}
*/