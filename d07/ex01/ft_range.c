/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 20:18:19 by cqu               #+#    #+#             */
/*   Updated: 2018/09/29 21:31:01 by cqu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	*ft_range(int min, int max)
{
	int i;
	int *array;
	
	if (min > max)
		return (0);
	array = (int *)malloc(sizeof(*array) * (max - min));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int		main(void)
{
	int *test = ft_range(3,7);
	int i = 0;
	while(test[i])
		printf("%d", test[i++]);
	return (0);
}
