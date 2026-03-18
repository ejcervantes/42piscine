/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:41:38 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/25 17:27:18 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
