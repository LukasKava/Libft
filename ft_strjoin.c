/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:11:39 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/19 18:06:40 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates with malloc and returns a new string which is result of the
both strings.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full_s;
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (!s1 || !s2)
		return (0);
	full_s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!full_s)
		return (NULL);
	while (s1[i] != '\0')
	{
		full_s[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		full_s[i] = s2[a];
		a++;
		i++;
	}
	full_s[i] = '\0';
	return (full_s);
}
