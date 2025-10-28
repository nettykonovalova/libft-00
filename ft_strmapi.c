/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:13:09 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:42:01 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*dest;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = f((unsigned int)i, s[i]);
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char add_one(unsigned int i, char c)
{
    (void)i; // ignore index for now
    return (c + 1); // shifts every character by one
}

int main(void)
{
    char *result;

    result = ft_strmapi("abc", add_one);
    if (result)
    {
        printf("%s\n", result); // expected: "bcd"
        free(result);
    }
    else
        printf("Allocation failed\n");

    return 0;
}
*/