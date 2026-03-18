/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:23:06 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 18:35:44 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pointera;
// 	int	*pointerb;

// 	a = 65;
// 	b = 90;
// 	pointera = &a;
// 	pointerb = &b;
// 	ft_swap(pointera, pointerb);
// 	write(1, &a, 1);
// 	write(1, &b, 1);
// 	return (0);
// }
