/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:23:30 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 11:32:18 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("'3' -> %d\n", ft_isprint('3'));
	printf("'f' -> %d\n", ft_isprint('f'));
	printf("' ' -> %d\n", ft_isprint(' '));
	printf("'~' -> %d\n", ft_isprint('~'));
	printf("127 -> %d\n", ft_isprint(127));
	printf("'\\n' -> %d\n", ft_isprint('\n'));
}
*/