/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:55:24 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/19 17:55:25 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", strchr("oi,bb", 'b') == ft_strchr("oi,bb", 'b'));
	printf("%d\n", strchr("oi,bb", 0) == ft_strchr("oi,bb", 0));
	printf("%d\n", strchr("oi,bb", 'i') == ft_strchr("oi,bb", 'i'));
}*/
