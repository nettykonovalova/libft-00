/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:36 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 11:32:11 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3)); // 0
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // <0
	printf("%d\n", ft_strncmp("abd", "abc", 3)); // >0
	printf("%d\n", ft_strncmp("abc", "abc", 0)); // 0
}
*/