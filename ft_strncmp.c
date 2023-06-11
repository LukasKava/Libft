/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:36:10 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/18 17:37:30 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
This function compares the fist n bytes of the string str 1 and str 2
Returns: 
- if <0  then str 1 is less than  str 2;
- if >0 then it indicates str 2 is less than str 1;
- if =0 then it indicates str1 is equal to str2;
*/

int	ft_strncmp(const char *st1, const char *st2, size_t n)
{
	size_t	i;
	int		sum;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && st1[i] != '\0' && st2[i] != '\0' && st1[i] == st2[i])
		i++;
	sum = (unsigned char)st1[i] - (unsigned char)st2[i];
	return (sum);
}
