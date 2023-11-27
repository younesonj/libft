/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younajja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:43:35 by younajja          #+#    #+#             */
/*   Updated: 2023/11/13 13:03:07 by younajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			if (little[j] == '\0' && big[i + j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
