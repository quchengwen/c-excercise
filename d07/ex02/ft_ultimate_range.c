/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:33:57 by cqu               #+#    #+#             */
/*   Updated: 2018/09/29 21:30:23 by cqu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i; 
	
	i = 0;
	*range = (int *)malloc(sizeof(**range) * (max - min + 1));
	if(min >= max)
	{
		*range = NULL;
		return (0);
	}
	while(i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return(i);
}

int		main(void)
{
	int *res = NULL;
	int i;
	int size;

	i = 0;
	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	while (i < 5)
	{
		printf("%d,", res[i]);
		i++;
	}
	printf("\n");	
}
