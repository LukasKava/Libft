/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:17:48 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/19 16:12:53 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strlcpy() function copies the null-terminated 
string from src to dest. 
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{	
	size_t	i;
	size_t	srcl;

	i = 0;
	srcl = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (!n)
		return (srcl);
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
