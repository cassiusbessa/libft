/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:39:53 by caqueiro          #+#    #+#             */
/*   Updated: 2023/08/08 22:44:07 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
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
}*/
