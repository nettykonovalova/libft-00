/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:34:53 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/22 16:06:28 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char ** arr, size_t used)
{
	size_t	i;

	i = 0;
	while (i < used)
	{
		free(arr[i]);
		i++;
	}
	free (arr);
}


char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	start;
	size_t	len;
	size_t	i, k;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof *arr);
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c) 
			i++;
		if (!s[i]) 
			break;
		start = i;
		while (s[i] && s[i] != c) 
			i++;
		len = i - start;
		arr[k] = ft_substr(s, start, len);
		if (!arr[k])
		{	
			free_split(arr, k);
			return (NULL);
		}
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int main(void)
{
    char **result;
    int i = 0;

    result = ft_split("hello world test", ' ');
    if (!result)
    {
        printf("ft_split returned NULL\n");
        return (1);
    }

    while (result[i])
    {
        printf("[%d] %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}
*/
/*
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	start;
	size_t	len;
	size_t	i;
	size_t	k;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		len = i - start;
		arr[k] = (char *)malloc(len + 1);
		if (!arr[k])
		{
			free_partial(arr, k);
			return (NULL);
		}
		ft_memcpy(arr[k], s + start, len);
		arr[k][len] = '\0';
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
*/