/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:16:47 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 17:19:23 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	int		f_c;
// 	char	*newstr;

// 	newstr = "LOLLOLLOL";
// 	f_c = ft_strlen(newstr);
// 	printf("%d", f_c);
// 	return (0);
// }
