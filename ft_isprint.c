/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:18:08 by lkavalia          #+#    #+#             */
/*   Updated: 2022/01/14 12:50:49 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int input)
{
	if (input >= 32 && input <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
