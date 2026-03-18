/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:42:30 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/10 23:59:39 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	minu;

	i = 0;
	num = 0;
	minu = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minu++;
		i++;
	}
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (minu % 2 != 0)
		num = num * -1;
	return (num);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("	\r---+-+--67-8"));
// 	printf("%d\n", atoi("12 34"));
// 	return (0);
// }
