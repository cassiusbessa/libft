/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:56:01 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/28 16:05:56 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

static int	itoa_size(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	reverse(char	*itoa, int l)
{
	int		start;
	int		end;
	char	t;

	start = 0;
	end = l - 1;
	while (start < end)
	{
		t = itoa[start];
		itoa[start] = itoa[end];
		itoa[end] = t;
		end--;
		start++;
	}
}

static	void	fill_itoa(char *itoa, int n, int base, int negative)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	while (n)
	{
		r = n % base;
		if (r > 9)
			itoa[i++] = (r - 10) + 'a';
		else
			itoa[i++] = r + '0';
		n = n / base;
	}
	if (negative)
		itoa[i++] = '-';
	reverse(itoa, i);
}

static char	*ft_itoa_base(int n, int base)
{
	char	*itoa;
	int		negative;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = n * -1;
	}
	itoa = (char *)ft_calloc((itoa_size(n) + negative + 1), sizeof (char));
	if (!itoa)
		return (NULL);
	fill_itoa(itoa, n, base, negative);
	return (itoa);
}

char	*ft_itoa(int n)
{
	return (ft_itoa_base(n, 10));
}

/*int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}*/
