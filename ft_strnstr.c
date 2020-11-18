/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:35:26 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/22 22:00:08 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t little_len;
	size_t over;

	i = 0;
	little_len = ft_strlen(little);
	over = len - little_len;
	if (little_len == 0)
		return (big);
	while (i <= over && len >= little_len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				return (&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
