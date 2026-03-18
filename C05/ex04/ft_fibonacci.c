/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 22:30:17 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/12 13:45:03 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_fibonacci(-1));
// }
