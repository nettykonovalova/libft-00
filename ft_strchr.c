/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:13 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 17:46:29 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Hello World";
	char *res;

	res = ft_strchr(str, 'W');
	printf("Searching for 'W': %s\n", res);

	res = ft_strchr(str, 'o');
	printf("Searching for 'o': %s\n", res);

	res = ft_strchr(str, '\0');
	printf("Searching for '\\0': \"%s\"\n", res);

	res = ft_strchr(str, 'z');
	printf("Searching for 'z': %p (NULL expected)\n", (void *)res);

	return (0);
}
*/