/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:12:50 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/17 15:12:54 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

/*int	main(void)
{
	printf("%d", isprint('Z') == ft_isprint('Z'));
	printf("%d", isprint('0') == ft_isprint('0'));
	printf("%d", isprint('@') == ft_isprint('@'));
	printf("%d", isprint('@') == ft_isprint('@'));
	printf("%d", isprint(127) == ft_isprint(127));
	
}*/
