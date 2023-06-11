/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:15:38 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/27 15:51:00 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
this function copies the char input  to the first n
characters of the string pointed t0, by the argument str.
*/

void	*ft_memset(void *str, int input, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)str;
	while (i < n)
	{
		a[i] = input;
		i++;
	}
	return (str = a);
}
