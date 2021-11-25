/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:02:05 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/24 18:55:01 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*subfunc(const char *s, char *substr, int start, int len)
{
	int	i;

	i = 0;
	while (s[start] && len)
	{
		substr[i] = s[start];
		i++;
		start++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	i = 0;
	substr = NULL;
	if (!s)
		return (0);
	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) == len)
		substr = (char *)ft_calloc(sizeof(char), len - start + 1);
	else if (ft_strlen(s) + start >= len)
		substr = (char *)ft_calloc(sizeof(char), len + 1);
	else if (ft_strlen(s) + start < len)
		substr = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!substr)
		return (NULL);
	return (subfunc(s, substr, start, len));
}
