/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:31:15 by seungyel          #+#    #+#             */
/*   Updated: 2020/11/17 12:13:58 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int count;
	char *arr;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == set[j])
		{
			i++;
			j++;
		}
		count++;
	}
	if (!(arr = malloc(sizeof(char) * (count + 1))))
		return (0);
	return (arr);
}
