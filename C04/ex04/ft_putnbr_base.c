/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:10:37 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/11 00:10:19 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	val[100];
	int		len;

	i = 0;
	len = get_len(base);
	if (len > 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			val[i++] = base[((nbr * -1) % len)];
			nbr = nbr / len * -1;
		}
		while (nbr > len - 1)
		{
			val[i] = base[(nbr % len)];
			nbr = nbr / len;
			i++;
		}
		val[i] = base[(nbr % len)];
		while (i >= 0)
			write(1, &val[i--], 1);
	}
}

// int main(void)
// {
// 	ft_putnbr_base(-3789032, "01");
// }
