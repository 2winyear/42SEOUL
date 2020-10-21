/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:35:26 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/18 22:36:09 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	size_t little_len;
	size_t big_len;
	size_t over;

	j = 0;
	i = 0;
	over = big_len - little_len;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	while (over + 1 != 0)
	{
		if (big[i] == little[i])
		{
			while (j < little_len)
			{
				if (big[i + j] == little[i + j])
				{
					if (little[i + j] == 0)
						return (big[i]);
				}
				j++;
			}
		}
		i++;
		over--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "abcdefghijklmn";
	char b[] = "de";
	printf("%s\n",ft_strnstr(a,b,10));
	printf("%s\n", strnstr(a,b,10));
	return (0);
}
*/
