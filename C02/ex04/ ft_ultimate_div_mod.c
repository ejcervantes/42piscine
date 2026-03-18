/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:45:24 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/02 12:44:15 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	mod;

	res = *a / *b;
	mod = *a % *b;
	*a = res;
	*b = mod;
}

int	main(void)
{
	int	res;
	int	mod;
	int	*pres;
	int	*pmod;

	res = 2048;
	mod = 50;
	pres = &res;
	pmod = &mod;
	ft_ultimate_div_mod(pres, pmod);
	write(1, &res, 1);
	write(1, &mod, 1);
	return (0);
}
