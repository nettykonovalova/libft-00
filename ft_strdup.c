/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:25:29 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/20 16:05:52 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len +1);
	return (copy);
}
/*
#include <stdio.h>

int main(void)
{
    char *s = "42Porto";
    char *dup = ft_strdup(s);
    printf("%s\n", dup);
    free(dup);
}
*/