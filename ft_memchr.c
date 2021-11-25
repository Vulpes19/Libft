/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:58 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/19 12:45:15 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*ptrc;
	unsigned char	c2;
	unsigned int	i;

	i = 0;
	ptrc = (unsigned char *)(ptr);
	c2 = (unsigned char)(c);
	while (n > 0)
	{
		if (ptrc[i] == c2)
			return ((unsigned char *)(&ptrc[i]));
		i++;
		n--;
	}
	return (NULL);
}
