/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 21:28:09 by cqu               #+#    #+#             */
/*   Updated: 2018/09/30 18:17:55 by cqu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int        len(int argc, char **argv)
{
	int        l;
	int        i;
	int        j;
	
	l = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			l++;
		l++;
		i++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char    *r;
	int        l;
	int        i;
	int        j;

	if ((r = malloc(len(argc, argv))) == NULL)
		return (NULL);
	i = 1;
	l = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			r[l++] = argv[i][j++];
		if (i < argc - 1)
			r[l++] = '\n';
		i++;
	}
	r[l] = '\0';
	return (r);
}


int		main(void)
{
	char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
	printf("%s", ft_concat_params(4,arr));
	return (0);
}
