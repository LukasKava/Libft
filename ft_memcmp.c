/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:38:30 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/27 15:35:27 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function compares the fist n bytes of memory area str 1 and 
memory area str 2
Returns: 
- if <0  then str1 is less than  str2;
- if >0 then it indicates str2 is less than str1;
- if =0 then it indicates str1 is equal to str2;
*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
