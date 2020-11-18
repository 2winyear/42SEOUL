/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <lsy2246@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 22:09:45 by seungyel          #+#    #+#             */
/*   Updated: 2020/11/10 21:51:40 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int n)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int i;
	int j;
	int count;
	char *arr;

	i = 0;
	j = 0;
	count = nbr_len(n);
	if (!(arr = (char*)malloc(sizeof(char) * (count + j + 1))))
		return (NULL);
	if (n == -2147483648)
	{
		j = 1;
		ft_strlcpy(arr, "-2147483648", count + j + 1);
		return (arr);
	}
	if (n < 0)
	{
		n = n * (-1);
		arr[0] = '-';
		j = 1;
	}
	arr[count + j] = 0;
	count = count - 1;
	while (count != -1 && n >= 0)
	{
		arr[count + j] = (char)(n % 10 + '0');
		n = n / 10;
		count--;
	}
	return (arr);
}
