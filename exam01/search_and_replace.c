/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:23:36 by cqu               #+#    #+#             */
/*   Updated: 2018/09/28 15:00:36 by cqu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_replace(char *str, int a, int b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			ft_putchar(b);
		else
			ft_putchar(a);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[2][1] != '\0' || argv[3][1] != '\0'))
				ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}

