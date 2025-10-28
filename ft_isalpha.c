/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:17:31 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:42:18 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("'f' -> %d\n", ft_isalpha('f'));
	printf("'5' -> %d\n", ft_isalpha('5'));
	printf("' ' -> %d\n", ft_isalpha(' '));
	printf("'a' -> %d\n", ft_isalpha('a'));
	return (0);
}
*/
