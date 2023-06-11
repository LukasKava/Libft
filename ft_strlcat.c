/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:23:23 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/19 17:30:38 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
strlcat() appends the null-terminated string src to the end of dest
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	g;
	size_t	dest_l;
	size_t	src_l;

	g = 0;
	dest_l = ft_strlen(dest);
	i = dest_l;
	src_l = ft_strlen(src);
	if (dst_size == 0)
		return (ft_strlen(src));
	if (dst_size < dest_l)
		return (src_l + dst_size);
	else
	{
		while (i + 1 <= dst_size && src[g] != '\0')
			dest[i++] = src[g++];
		if ((dest_l + g) == dst_size && dest_l < dst_size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (dest_l + src_l);
	}
}
