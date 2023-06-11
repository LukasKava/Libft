/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:17:49 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/20 16:24:24 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates with malloc and returns a copy of s1 with the characters from set
removed from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	b;
	size_t	z;

	b = 0;
	z = 0;
	if (!s1 || !set)
		return (0);
	while (s1[b] != '\0' && ft_strchr(set, s1[b]))
	{
		z++;
		b++;
	}
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
	{
		z++;
		i--;
	}
	i = ft_strlen(s1) - z;
	return (ft_substr(s1, b, i + 1));
}
