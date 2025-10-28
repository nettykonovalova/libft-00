/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:24:47 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/27 18:41:57 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%c -> %c\n", 'A', tolower('A'));
	printf("%c -> %c\n", 'Z', tolower('Z'));
	printf("%c -> %c\n", 'M', tolower('M'));
	printf("%c -> %c\n", 'a', tolower('a'));
	printf("%c -> %c\n", '!', tolower('!'));
	return 0;
}
*/
