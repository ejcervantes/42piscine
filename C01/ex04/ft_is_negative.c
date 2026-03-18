/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:16:26 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/25 17:29:30 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	if (n < 0)
	{
		r = 'N';
	}
	else
	{
		r = 'P';
	}
	write(1, &r, 1);
}

// int	main(void)
// {
// 	ft_is_negative(-10);
// 	ft_is_negative(10);
// 	return (0);
// }
