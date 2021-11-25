/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:25:29 by abaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 20:34:31 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*func(char *big, char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			a = i;
			while (big[a] == little[j] && little[j] && a < len)
			{
				a++;
				j++;
			}
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0' && (int)len <= 0)
		return ((char *)big);
	if (little == NULL && big == NULL)
		return (NULL);
	return (func((char *)big, (char *)little, len));
}
