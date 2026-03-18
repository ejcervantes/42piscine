/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:18:44 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/12 12:14:15 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	val[12];

	i = 0;
	val[0] = '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb < -3000)
			val[i++] = ((((nb + 3000) * -1) % 10) + '0');
		else
			val[i++] = ((nb * -1) % 10) + '0';
		nb = nb / 10 * -1;
	}
	while (nb > 0)
	{
		val[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (i > 0)
		while (--i >= 0)
			write(1, &val[i], 1);
	else
		write(1, &val[i], 1);
}

// int main(void)
// {
// 	ft_putnbr(-2);
// 	return (0);
// }
