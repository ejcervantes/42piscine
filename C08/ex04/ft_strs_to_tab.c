/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 23:08:06 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/18 15:57:02 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int			i;
	int			len;
	char		*str;

	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*table;
	int					i;

	i = 0;
	table = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!table)
		return (NULL);
	while (i < ac)
	{
		table[i].size = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		if (table[i].copy == NULL)
		{
			while (i-- > 0)
				free(table[i].copy);
			free(table);
			return (NULL);
		}
		i++;
	}
	table[i].str = 0;
	return (table);
}
