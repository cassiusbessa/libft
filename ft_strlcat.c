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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	t = i + j;
	if (size <= i)
		return (size + j);
	j = 0;
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (t);
}

/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	i;
	size_t	total;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	d = ft_strlen(dst);
	total = d + ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && d < (size - 1))
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (total);
}

#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 'r', 15);
	printf("%ld\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	printf("%s", dest);
}*/
