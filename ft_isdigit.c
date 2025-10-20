/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:23:21 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 11:32:18 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("'3' -> %d\n", ft_isdigit('3'));
	printf("'f' -> %d\n", ft_isdigit('f'));
	printf("' ' -> %d\n", ft_isdigit(' '));
	printf("'9' -> %d\n", ft_isdigit('9'));
}
*/