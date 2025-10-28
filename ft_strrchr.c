/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:42 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:41:59 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	slen;

	slen = (ssize_t)ft_strlen(s);
	while (slen >= 0)
	{
		if ((unsigned char)s[slen] == (unsigned char)c)
			return ((char *)&s[slen]);
		slen--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	const char *text = "Hello world!";
	char *result;

	// Find a character that appears multiple times
	result = ft_strrchr(text, 'l');
	printf("Searching for 'l' in \"%s\" → %s\n", text, result);

	// Find the first character
	result = ft_strrchr(text, 'H');
	printf("Searching for 'H' → %s\n", result);

	// Find a character that does not exist
	result = ft_strrchr(text, 'z');
	printf("Searching for 'z' → %p (NULL expected)\n", (void *)result);

	// Search for the null terminator '\0'
	result = ft_strrchr(text, '\0');
	printf("Searching for '\\0' → \"%s\"\n", result);

	return 0;
}
*/