/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:35:02 by seungyel          #+#    #+#             */
/*   Updated: 2020/11/17 16:17:19 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	**ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int count;
	char **result;

	i = 0;
	count = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			j = 1;
			i++;
		}
		count = count + j;
		while (s[i] == c)
			i++;
	}
	result = (char**)malloc(sizeof(char*) * (count + 1));
	count = 0;//여기서부터 k길이 할당
	while (s[count] != '\0')
	{
		while (s[count] == c)
			count++;
		while (s[count] != c && s[count] != '\0')
		{
			count++;
		}
		result[k] = (char*)malloc(sizeof(char) * (count + 1));
		k++;
	}
	count = 0;//여기서부터 문자 복사
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		while (s[count] != c && s[count] != '\0')
		{
			strcpy(result[k], &s[count]);
			count++;
		}
		k++;
	}
	result[k][i] = '\0';
	return (result);
}
