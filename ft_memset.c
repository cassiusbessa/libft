/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:21:18 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:21:20 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n)
	{
		((unsigned char *)s)[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	ft_memset(str, '.', 10);
	printf("%s", str);
}*/
