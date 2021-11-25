/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:52 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 20:34:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cat(char *dest, char *src, char *ptr, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < len)
	{
		while (dest[j])
		{
			ptr[i] = dest[j];
			i++;
			j++;
		}
			j = 0;
		while (src[j])
		{
			ptr[i] = src[j];
			i++;
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		s2len;
	int		s1len;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s2len = ft_strlen((char *)s2);
	s1len = ft_strlen((char *)s1);
	s1len += s2len;
	ptr = (char *)malloc(sizeof(char) * s1len + 1);
	if (!ptr)
		return (0);
	ptr = ft_cat((char *)s1, (char *)s2, ptr, s1len);
	return (ptr);
}
