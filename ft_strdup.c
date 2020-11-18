/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:28:14 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/22 20:17:59 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *s)
{
	char *arr;

	arr = (char *)malloc(ft_strlen(s) + 1);
	ft_strlcpy(arr, s, ft_strlen(s) + 1);
	return (arr);
}
