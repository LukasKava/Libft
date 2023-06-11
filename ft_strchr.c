/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:09:02 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/18 15:58:13 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
This function searches fot the first occurrence of the char c ir the
string pointed to by the argument str
*/

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*b;

	i = 0;
	b = (char *)str;
	if (c > 256)
		c = c - 256;
	while (b[i] != '\0' && c != b[i])
		i++;
	if (b[i] == c)
		return ((char *)str + i);
	return (0);
}
