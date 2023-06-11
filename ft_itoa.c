/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:36:59 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/21 14:12:06 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	i_counter(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	b;
	char	*conv;

	len = i_counter(n);
	conv = malloc(sizeof(char) * (len + 1));
	if (!conv)
		return (NULL);
	conv[len] = '\0';
	if (n < 0)
	{
		conv[0] = '-';
		b = 1;
	}
	else
		b = 0;
	while (len-- > b)
	{
		if (n < 0)
			conv[len] = '0' + n % 10 * (-1);
		else
			conv[len] = '0' + n % 10;
		n = n / 10;
	}
	return (conv);
}
