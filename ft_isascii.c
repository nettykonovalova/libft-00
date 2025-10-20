/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:23:06 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 11:32:19 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("'3' -> %d\n", ft_isascii('3'));
	printf("'f' -> %d\n", ft_isascii('f'));
	printf("200 -> %d\n", ft_isascii(200));
	printf("-5 -> %d\n", ft_isascii(-5));
}
*/