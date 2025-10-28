/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:31 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 17:48:24 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Kyiv -> %d\n", ft_strlen("Kyiv"));
	printf("Portugal -> %d\n", ft_strlen("Portugal"));
	printf("Lisbon -> %d\n", ft_strlen("Lisbon"));
	printf("Montreal -> %d\n", ft_strlen("Montreal"));
}
*/