/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:02:01 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/28 18:02:03 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	r = ft_calloc(i + 1, sizeof (char));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}

/*int	main(void)
{

	ft_strmapi("Ericles Piana", print);
	
	return (0);
}*/
