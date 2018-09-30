/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:55:38 by arusso            #+#    #+#             */
/*   Updated: 2018/09/09 15:57:58 by arusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_splitoa(char *str, char c)
{
	int		*dest;
	int		count;
	int		i;
	int		j;

	count = ft_count_word(str, ' ');
	if (!(dest = (int*)malloc(sizeof(int) * count)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		dest[j] = ft_atoi(str + i);
		j++;
		while (str[i] != c && str[i])
			i++;
	}
	dest[j] = '\0';
	return (dest);
}
