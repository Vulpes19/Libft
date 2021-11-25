/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:12 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/15 14:42:51 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *)(src);
	ptr2 = (char *)(dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (ptr2);
}
