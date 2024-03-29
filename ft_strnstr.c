/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:46:27 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/26 14:13:46 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function locates the first occurence of the null-terminated string str2
in the s1
Return Value:
If s2 is empty then it returns s1;
If s2 does not occur in s1 it returns Null
Otherwise a pointer to the fist char of the first occurence of s2 is returned
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (s2[0] == '\0' || s1 == s2)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < len)
		{
			if (s1[j + i] == '\0' && s2[j] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
