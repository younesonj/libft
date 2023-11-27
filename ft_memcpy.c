/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younajja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:45:28 by younajja          #+#    #+#             */
/*   Updated: 2023/11/16 18:02:25 by younajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	dd = (unsigned char *) dest;
	ss = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dest);
}
