/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:11:04 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/17 22:47:42 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
#include <stdio.h>

int main (void)
{
	printf ("%d", ft_iterative_power(0, -2));
}
