/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:15:23 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/23 19:15:25 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*m;

	i = 0;
	m = malloc(nmemb * size);
	if (!m)
		return (0);
	while (i < (nmemb * size))
		((char *)m)[i++] = 0;
	return (m);
}

/*int	main(void)
{
	void	*c;
	
	c = ft_calloc(10, 1);
	printf("%ld", sizeof (c));
}*/
