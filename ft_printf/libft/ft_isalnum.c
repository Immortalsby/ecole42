/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 23:54:08 by bshi              #+#    #+#             */
/*   Updated: 2019/10/02 23:58:29 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}