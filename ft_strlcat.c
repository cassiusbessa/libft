/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:27:51 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/18 20:27:53 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	t;
 
	i = 0;
	j = 0;
	t = ft_strlen(dst) + ft_strlen(src);
	while (dst[i])
		i++;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (t);
}

/*int	main(void)
{
	char dest[10] = "oi ";
	char src[8] = "abc";
	ft_strlcat(dest, src, 3);
	printf("%s", dest);
}*/
