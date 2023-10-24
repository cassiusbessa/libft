/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:40:43 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/24 15:40:45 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((big[i] != '\0' && little[c] != '\0') && i < len)
	{
		if (big[i] == little[c])
		{
			i++;
			c++;
			if (little[c] == '\0')
				return ((char *)&big[i - c]);
		}
		else
		{
			i = (i - c) + 1;
			c = 0;
		}
	}
	return (NULL);
}*/

