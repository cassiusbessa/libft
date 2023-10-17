/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:23:15 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/16 21:28:22 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	printf("%d", isascii('a') == ft_isascii('a'));
	printf("%d", isascii(0) == ft_isascii(0));
	printf("%d", isascii('@') == ft_isascii('@'));
	printf("%d", isascii('3') == ft_isascii('3'));
}*/
