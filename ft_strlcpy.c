/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:25 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:42:04 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (destsize > 0)
	{
		i = 0;
		while (i + 1 < destsize && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[10];
	size_t result;

	result = ft_strlcpy(dest, "Hello", sizeof(dest));

	printf("Returned length: %zu\n", result);
	printf("Destination: \"%s\"\n", dest);

	return 0;
}
*/