/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:56:48 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 17:14:56 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count <= size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = temp;
		count++;
	}
}

// int	main(void)
// {
// 	int	arr[5] = {10, 32, 43, 47, 25};
// 	int	len;
// 	int	*parr;
// 	int	i;

// 	parr = arr;
// 	len = 5;
// 	ft_rev_int_tab(parr, len);
// 	for (i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	return (0);
// }
