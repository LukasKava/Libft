/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:49:46 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/17 15:31:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
It duplicates the string
*/

char	*ft_strdup(const char *string)
{
	size_t	i;
	char	*a;

	i = 0;
	a = malloc((ft_strlen(string) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	while (string[i] != '\0')
	{
		a[i] = string[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
