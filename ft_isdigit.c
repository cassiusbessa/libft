/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:57:06 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/16 20:57:08 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_isdigit('0') == isdigit('0'));
	printf("%d", ft_isdigit('5') == isdigit('5'));
	printf("%d", ft_isdigit('a') == isdigit('a'));
	printf("%d", ft_isdigit('@') == isdigit('@'));
	printf("%d", ft_isdigit('9') == isdigit('9'));
}*/
