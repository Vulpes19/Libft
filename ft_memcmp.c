/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:24:06 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/15 14:42:33 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1c;
	unsigned char	*ptr2c;

	i = 0;
	ptr1c = (unsigned char *)(ptr1);
	ptr2c = (unsigned char *)(ptr2);
	if (n == 0)
		return (0);
	while (ptr1c[i] == ptr2c[i] && i < n - 1)
		i++;
	return (ptr1c[i] - ptr2c[i]);
}
