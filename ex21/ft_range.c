/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbirdie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:55:32 by mbirdie           #+#    #+#             */
/*   Updated: 2019/09/05 11:59:11 by mbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
