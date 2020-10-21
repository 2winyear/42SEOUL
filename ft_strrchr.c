/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:20:31 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/21 20:46:26 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int count;
	int i;

	i = 0;
	count = ft_strlen(str);
	if (c == 0)
		return (&str[count]);
	while (str[i] == '\0' && count != 0)
	{
		if (str[count] == c)
			return (&str[i]);
		i++;
		count--;
	}
	return (0);
}
