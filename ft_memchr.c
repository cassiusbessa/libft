/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:20 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:20:23 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*str;
	unsigned char			f;

	str = (const unsigned char *)s;
	f = (unsigned char)c;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == f)
			return ((void *)&str[i]);
		i++;
	}
	if (!f)
		return ((void *)&str[i]);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", memchr("oi,bb", 'b', 4) == ft_memchr("oi,bb", 'b', 4));
	printf("%d\n", memchr("oi,bb", 0, 4) == ft_memchr("oi,bb", 0, 4));
	printf("%d\n", memchr("oi,bb", 'i', 4) == ft_memchr("oi,bb", 'i', 4));
}*/
