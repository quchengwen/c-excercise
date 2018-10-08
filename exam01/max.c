/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 13:55:01 by cqu               #+#    #+#             */
/*   Updated: 2018/09/29 15:25:20 by cqu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	if (len < 1)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main(void)
{
	int tab[] = {3, 4, 45, 32};

	printf("%d\n", max(tab, 4));
	return (0);
}
