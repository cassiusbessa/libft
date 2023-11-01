/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:50:01 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:50:05 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((i < len) && (big[i] != '\0' && little[c] != '\0'))
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
}

/*#include <strings.h>
int	main(void)
{
	char	big[] = "boikkkkkkk";
	char	little[] = "oi";
	char big2[] = "bolalata";
	char little2[] = "lata";
	char big3[] = "oi,bb";
	char little3[] = "coca";
	//printf("%s\n", ft_strnstr(big, little, 6));
	printf("%s\n", ft_strnstr(big2, little2, 8));
	//printf("%s\n", ft_strnstr(big3, little3, 12));
}*/
