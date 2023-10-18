/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:49:32 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/16 18:49:46 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1024);
	return (0);
}

/*int	main(void)
{
	printf("%d", isalpha('b') == ft_isalpha('b'));
	printf("%d", isalpha('0') == ft_isalpha('0'));
	printf("%d", isalpha('@') == ft_isalpha('@'));
	printf("%d", isalpha(' ') == ft_isalpha(' '));
}*/
