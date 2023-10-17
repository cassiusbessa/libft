/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:06:43 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/17 16:06:44 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (n)
	{
		((unsigned char *)s)[n-1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	ft_memset(&str[8], '.', 10);
	printf("%s", str);
}*/
