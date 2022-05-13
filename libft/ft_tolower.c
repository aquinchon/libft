/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquincho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:43:35 by aquincho          #+#    #+#             */
/*   Updated: 2022/03/14 08:43:39 by aquincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < -1 && c >= -128)
		c += 256;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
