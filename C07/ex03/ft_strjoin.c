/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zscekic <zscekic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:37:44 by zscekic           #+#    #+#             */
/*   Updated: 2026/03/17 14:43:31 by zscekic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	len;

	len = 0;
	while (strs[len])
	{
		len ++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i ++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin2(int size, int char_len, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		dest_len;

	dest = malloc(sizeof(char) * (char_len + 1));
	if (dest == NULL)
		return (dest);
	dest[0] = '\0';
	dest_len = 0;
	i = 0;
	while (dest_len < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (dest_len < size -1)
			dest = ft_strcat(dest, sep);
		i++;
		dest_len++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		char_len;
	int		i;

	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		dest[0] = '\0';
		return (dest);
	}
	char_len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		char_len = char_len + ft_strlen(strs[i]);
		i++;
	}
	dest = ft_strjoin2(size, char_len, strs, sep);
	return (dest);
}

// int	main(void)
// {
// 	int		size;
// 	char	*sep;

// 	size = 3;
// 	sep = "****";
// 	char *str[] = {"hello", "world", "cs50", "is", "fun", NULL};
// 	printf("%s", ft_strjoin(size, str, sep));
// 	ft_strjoin(size, str, sep);
// }
