/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:20 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:42:04 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dlen < destsize && dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (dlen == destsize)
		return (destsize + slen);
	while (src[i] != '\0' && (dlen + i + 1) < destsize)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>

int	main(void)
{
	char buf1[15] = "Hello";
	char buf2[15] = "Hello";
	size_t ret;

	// 1. Normal append
	ret = ft_strlcat(buf1, " World", sizeof(buf1));
	printf("Test 1:\nResult: \"%s\"\nReturn: %zu\n\n", buf1, ret);

	// 2. Small buffer (truncation)
	ret = ft_strlcat(buf2, " World", 8);
	printf("Test 2:\nResult: \"%s\"\nReturn: %zu\n\n", buf2, ret);

	// 3. size smaller than dest length
	char buf3[5] = "Hello";
	ret = ft_strlcat(buf3, "World", 3);
	printf("Test 3:\nResult: \"%s\"\nReturn: %zu\n\n", buf3, ret);

	return (0);
}
*/