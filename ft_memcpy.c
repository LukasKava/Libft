/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:38:24 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/27 15:44:15 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function copies n characters from the memory area loc to dest.
"const" variables can only be initialized once.
*/

void	*ft_memcpy(void *dest, const void *loc, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)loc;
	if ((dest == loc) || n == 0)
		return (dest);
	if (!dest && !loc)
		return (0);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
