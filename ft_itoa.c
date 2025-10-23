/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:04:05 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/23 17:55:33 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;
	long	temp;

	len = 0;
	temp = n;
	if (temp == 0)
		return (1);
	if (temp < 0)
	{
		len++;
		temp = -temp;
	}
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nb;
	
	nb = n;
	len = count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    int numbers[] = {0, 42, -42, 123456, -123456, 2147483647, -2147483648};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    char *str;
    
    for (int i = 0; i < size; i++)
    {
        str = ft_itoa(numbers[i]);
        if (!str)
        {
            printf("Memory allocation failed for %d\n", numbers[i]);
            continue;
        }
        printf("ft_itoa(%d) = \"%s\"\n", numbers[i], str);
        free(str);
    }

    return 0;
}
*/