/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:20 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:49:41 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char *)s1)[i]
				- (int)((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[]  = "nos somos iguais";
	char	s2[]  = "nos somos iguais";

	char	s3[]  = "bbc";
	char	s4[]  = "bcc";

	char s5[] = "abcd";
	char s6[] = "def";

	int comp1 = ft_strncmp(s1, s2, 15);
	//int comp2 = ft_strncmp(s3, s4, 1);
	int comp3 = ft_strncmp(s5, s6, 2);

	printf("%d", comp1);
	//printf("%s", "\n");
	//printf("%d", comp2);
	printf("%s", "\n");
	printf("%d", comp3);
	printf("%s", "\n");
	printf("%d", ft_strncmp("test\200", "test\0", 6));
}*/
