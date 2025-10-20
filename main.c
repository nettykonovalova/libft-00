/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:25:04 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/17 19:48:20 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char dest[20];
	const char *src = "Hello";
	printf("%zu\n", ft_strlcpy(dest, src, 20));
	return 0;
}

