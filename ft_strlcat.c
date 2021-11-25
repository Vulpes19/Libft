/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:44:26 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/24 18:48:17 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	len;

	i = 0;
	srclen = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (srclen + size);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (srclen + size);
	len = size - dstlen - 1;
	size = dstlen;
	while (i < len && src[i])
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (size + srclen);
}
