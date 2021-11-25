/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:07:03 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/24 18:55:41 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	int			end;
	char		*trim;

	start = 0;
	if (!s1)
		return (0);
	end = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[start]) && s1[start])
		start++;
	while (ft_strchr((char *)set, s1[end - 1]) && end > 1)
		end--;
	if (start == ft_strlen(s1) && end == 1)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * end - start + 1);
	if (!trim)
	{
		free(trim);
		return ((char *)ft_calloc(1, sizeof(char)));
	}
	trim = cpy(trim, (char *)&s1[start], end - start);
	return (trim);
}
