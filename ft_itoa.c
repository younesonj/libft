/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younajja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:20:24 by younajja          #+#    #+#             */
/*   Updated: 2023/11/13 15:07:13 by younajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getlen(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*game(char *str, size_t len, size_t i, int n)
{
	while (len > i)
	{
		len--;
		if (n < 0)
		{
			str[len] = 48 + n % 10 * (-1);
			n = n / 10;
		}
		else
		{
			str[len] = n % 10 + 48;
			n = n / 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = getlen(n);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	game (str, len, i, n);
	str[len] = '\0';
	return (str);
}
