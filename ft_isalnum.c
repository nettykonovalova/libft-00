/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:06 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 11:32:23 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}
/*
#include <stdio.h>
int main(void)
{
	printf("'2' -> %d\n", ft_isalnum('2'));
	printf("'a' -> %d\n", ft_isalnum('a'));
	printf("' ' -> %d\n", ft_isalnum(' '));
	printf("'7' -> %d\n", ft_isalnum('7'));
	printf("'f' -> %d\n", ft_isalnum('f'));
	printf("'-' -> %d\n", ft_isalnum('-'));
}
*/
