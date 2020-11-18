/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 21:05:16 by seungyel          #+#    #+#             */
/*   Updated: 2020/11/17 12:09:01 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//start 번째부터 len 개 만큼의 문자를
//어떤 문자열(substr)에 담아 리턴하는 함수다. malloc이 필요하다.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *result;

	i = 0;
	if(!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
