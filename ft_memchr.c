/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timatias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 07:47:09 by timatias          #+#    #+#             */
/*   Updated: 2024/05/18 07:47:14 by timatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*block;

	block = (const char *)s;
	count = 0;
	while (count < n)
	{
		if (block[count] == (char)c)
			return ((void *)&block[count]);
		count++;
	}
	return (NULL);
}
