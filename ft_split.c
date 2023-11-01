/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:27:02 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:27:06 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

static int	count_big_array(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

static int	count_little_array(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	void	fill_matrix(char **matrix, int size, const char *s, char c)
{
	int	ex;
	int	skip;

	ex = 0;
	while (size && *s)
	{
		if (*s != c)
		{
			skip = count_little_array(s, c);
			matrix[ex] = ft_substr(s, 0, skip);
			if (!matrix[ex])
			{
				while (ex)
					free(matrix[ex--]);
				free(matrix);
				return ;
			}
			s += skip;
			size--;
			ex++;
			continue ;
		}
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		q;

	if (!s)
		return (NULL);
	q = count_big_array(s, c);
	split = ft_calloc(q, sizeof (char *));
	if (!split)
		return (NULL);
	fill_matrix(split, q, s, c);
	return (split);
}

/*int	main(void)
{
	int	i = 0;
	char	**split = ft_split("        oi,bb", ' ');
	while (i < 1)
	{
		printf("%s", split[i]);
		i++;
	}
	free(split);
}*/
