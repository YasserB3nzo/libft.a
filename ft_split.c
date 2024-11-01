/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:22:10 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/10/31 23:30:43 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *array, char sep)
{
	int	count = 0, i = 0;
	while (array[i] == sep)
		i++;
	while (array[i])
	{
		if (array[i] == sep || array[i + 1] == '\0')
		{
			while (array[i] == sep)
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_copy_word(const char *s, int start, int end)
{
	char	*word = malloc((end - start + 1) * sizeof(char));
	int		i = 0;
	if (!word)
        return NULL;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0'; 
	return (word);
}

void free_split(char **str)
{
    int i;
    i=0;
	while (str[i])
	{
        free(str[i]);
        i++;
    }
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		count_words = ft_count_words((char *)s, c);
	char	**ptr = malloc((count_words + 1) * sizeof(char *));
	int		i = 0, word_index = 0, start, end;

	if (!s || !ptr)
        return NULL;
	while (word_index < count_words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (!(ptr[word_index++] = ft_copy_word(s, start, end)))
		{
			free_split(ptr);
			return NULL;
		}
	}
	ptr[word_index] = NULL;
	return (ptr);
}

#include<stdio.h>
int main()
{
   char car[] = "yasser$benzidiya$hafssa";
   char **spli = ft_split(car, '$'); 
   int i = 0;
   while (spli[i] != NULL)
   {
       printf("spli[%d]: %s\n", i, spli[i]);
       i++;
   }
   return 0;
}
