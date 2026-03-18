/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:52:04 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 18:35:47 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	res;
// 	int	mod;
// 	int	*pres;
// 	int	*pmod;

// 	pres = &res;
// 	pmod = &mod;
// 	ft_div_mod(103, 2, pres, pmod);
// 	printf("%d", res);
// 	printf("%d", mod);
// 	return (0);
// }
