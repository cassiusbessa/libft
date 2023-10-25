/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:12:57 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/25 15:22:22 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	e = i;
	while (s1[e])
		e++;
	if (e == i)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[e]))
		e--;
	return (ft_substr(s1, i, (e - i) + 1));
}
/*int main(void)
{
	char *s1 = "";
	char *s2 = "";
	char *ret = ft_strtrim(s1, s2);
    printf("%s", ret);
}*/
