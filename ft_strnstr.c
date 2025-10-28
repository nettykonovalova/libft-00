/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:46:24 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:42:00 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (len - i < nlen)
			break ;
		j = 0;
		while (j < nlen && haystack[i + j] == needle[j])
			j++;
		if (j == nlen)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	const char *text = "Hello world, 42 students!";
	const char *substr1 = "world";
	const char *substr2 = "42";
	const char *substr3 = "student";
	const char *substr4 = "notfound";
	const char *substr5 = "";
	char *res;

	// Test 1: normal substring
	res = ft_strnstr(text, substr1, 20);
	printf("1) Searching \"%s\" -> %s\n", substr1, res ? res : "NULL");

	// Test 2: substring later in the string but within limit
	res = ft_strnstr(text, substr2, 20);
	printf("2) Searching \"%s\" -> %s\n", substr2, res ? res : "NULL");

	// Test 3: substring partly outside len
	res = ft_strnstr(text, substr3, 15);
	printf("3) Searching \"%s\" -> %s\n", substr3, res ? res : "NULL");

	// Test 4: substring not present
	res = ft_strnstr(text, substr4, 25);
	printf("4) Searching \"%s\" -> %s\n", substr4, res ? res : "NULL");

	// Test 5: empty needle
	res = ft_strnstr(text, substr5, 10);
	printf("5) Searching empty string -> %s\n", res);

	return 0;
}
*/