/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:24:53 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/20 17:42:00 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	dest = malloc((end - start) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + start, end - start);
	dest[end - start] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char *res;

	res = ft_strtrim("  hello world  ", " ");
	printf("Result: \"%s\"\n", res);
	free(res);

	res = ft_strtrim("xx42xx", "x");
	printf("Result: \"%s\"\n", res);
	free(res);

	res = ft_strtrim("nothing", "");
	printf("Result: \"%s\"\n", res);
	free(res);

	return (0);
}
*/