/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:33:53 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/03 19:35:47 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	scarping_variable(size_t *i, size_t *j, int *index);

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*word_dup(const char *str, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;
	int		words;

	scarping_variable(&i, &j, &index);
	words = count_words(s, c) + 1;
	split = malloc((words) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

void	scarping_variable(size_t *i, size_t *j, int *index)
{
	*i = 0;
	*j = 0;
	*index = -1;
}
