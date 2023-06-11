/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:20:59 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/17 14:23:38 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Unsigned char stores a single character and requires 1byte/8bits of memory
and also non negative integers. The range from 0 to 255

Bzero function erases the data in the n bytes of memory starting at location
pointed by s
*/

void	ft_bzero(void *input, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)input;
	i = 0;
	while (i < n)
	{
		a[i] = '\0';
		i++;
	}
}
