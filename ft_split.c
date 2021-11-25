/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:27:58 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/24 19:04:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	/*if (s[i] != c && s[i])
	{
		count++;
		i++;
	}*/
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i] != '\0' && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	**copy(char **split, char *ptr, int *lens, char c)
{
	int	i;
	int	j;
	int	k;
	int	nword;

	i = 0;
	j = 0;
	k = 0;
	nword = countwords(ptr, c);
	while (i < nword)
	{
		k = 0;
		while (lens[i])
		{
			while (ptr[j] == c)
				j++;
			split[i][k] = ptr[j];
			k++;
			j++;
			lens[i]--;
		}
		split[i][k] = '\0';
		i++;
	}
	return (split);
}

static char	**allocate(char **str, int *lens, int nword)
{
	int	i;

	i = 0;
	str = (char **)ft_calloc(sizeof(char *), nword + 1);
	if (!str)
		return (0);
	while (i < nword)
	{
		str[i] = (char *)ft_calloc(sizeof(char), lens[i] + 1);
		if (!str[i])
			return (0);
		i++;
	}
	return (str);
}

static int	*wordlen(char *s, int nword, char c)
{
	int	i;
	int	j;
	int	len;
	int	*ptr;

	i = 0;
	j = 0;
	len = 0;
	if (!s)
		return (0);
	ptr = (int *)ft_calloc(nword, sizeof(int));
	if (!ptr)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
			ptr[j]++;
		else if (s[i] == c && s[i + 1] != c)
			j++;
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		*lens;
	int		nwords;
	char	**split;
	int		i;

	i = 0;
	split = NULL;
	if (!s)
		return (NULL);
	nwords = countwords((char *)s, c);
	lens = wordlen((char *)s, nwords, c);
	split = allocate(split, lens, nwords);
	if (!split)
		return (NULL);
	split = copy(split, (char *)s, lens, c);
	free(lens);
	return (split);
}
