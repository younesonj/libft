/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younajja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:57:44 by younajja          #+#    #+#             */
/*   Updated: 2023/11/13 21:35:19 by younajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setch(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (setch(set, *s1) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size > 0)
	{
		if (setch(set, s1[size - 1]) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
