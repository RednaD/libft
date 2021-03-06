/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_between.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:29:36 by arusso            #+#    #+#             */
/*   Updated: 2018/10/03 15:31:11 by arusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_between(int a, int b, int c)
{
	if (!a || !b || !c)
		return (-1);
	return ((a <= b && b <= c) ? 1 : 0);
}
