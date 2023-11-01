/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:13:49 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:13:53 by caqueiro         ###   ########.fr       */
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
