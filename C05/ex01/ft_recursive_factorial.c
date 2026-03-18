/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:10:09 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/10 21:32:43 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));	
// }
