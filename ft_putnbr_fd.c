/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:03:22 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/28 22:04:14 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n <= 9)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		i = 0;
		if (n == 0)
			buffer[i++] = '0';
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
		while (--i >= 0)
			write(fd, &buffer[i], 1);
	}
}*/

/*int	main()
{
	int i = (-2147483647 -1);
	ft_putnbr_fd(i, 1);
}*/
