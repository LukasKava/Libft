/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:38:14 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/18 15:37:44 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function searches for the last occurrence of the char in the string
pointed to, by the argument str.
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		b;
	char	*f_str;

	i = ft_strlen(str);
	b = 0;
	f_str = (char *)str;
	if (c > 256)
		c = c - 256;
	while (i >= b)
	{
		if (f_str[i] == c)
			return ((char *)str + i);
		else
			i--;
	}
	return (0);
}
