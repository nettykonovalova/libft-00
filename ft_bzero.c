/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:14:46 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 17:26:00 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char str[10] = "abcdefghi";

	printf("Before: %s\n", str);
	ft_bzero(str + 3, 3);  // zero out middle part: positions 3–5
	printf("After: %s\n", str);

	return (0);
}
*/
