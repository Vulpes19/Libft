/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:51 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/19 12:22:13 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*ptr;

	i = 0;
	len = 0;
	ptr = (unsigned char *)(str);
	while (i < n)
	{
		ptr[i] = (unsigned char)(a);
		i++;
	}
	return (ptr);
}
