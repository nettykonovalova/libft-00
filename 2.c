/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonoval <akonoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:34:53 by akonoval          #+#    #+#             */
/*   Updated: 2025/10/22 16:06:31 by akonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_tok
{
	size_t	cursor;
	size_t	start;
	size_t	len;
}	t_tok;


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

static int	next_token(char const *s, char c, t_tok *t)
{
	size_t	i;

	i = t->cursor;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
	{
		t->cursor = i;
		return (0);
	}
	t->start = i;
	while (s[i] && s[i] != c)
		i++;
	t->len = i - t->start;
	t->cursor = i;
	return (1);
}

static int	fill_words(char **arr, char const *s, char c)
{
	t_tok	t;
	size_t	k;

	t.cursor = 0;
	k = 0;
	while (next_token(s, c, &t))
	{
		arr[k] = ft_substr(s, t.start, t.len);
		if (!arr[k])
		{	
			free_split(arr, k);
			return (-1);
		}
		k++;
	}
	arr[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof * arr);
	if (!arr)
		return (NULL);
	if (fill_words(arr, s, c) < 0)
		return (NULL);
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
    free (result);
    return (0);
}
*/
