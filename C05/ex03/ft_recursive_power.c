/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:12:37 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/10 22:49:07 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2,2));
// }