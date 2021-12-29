/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:39:14 by smadie            #+#    #+#             */
/*   Updated: 2021/12/29 19:13:43 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int tab[256] = {0};
	int j = 0;
	int i = 0;

	if (argc == 3)
	{
		while (j < 3)
		{
			while (argv[j][i])
				tab[(int)argv[j][i++]] = 1;
			i = 0;
			j++;
		}
		j = 1;
		while (j < 3)
		{
			while (argv[j][i])
			{
				if (tab[(int)argv[j][i]] == 1)
				{
					write(1, &argv[j][i], 1);
					tab[(int)argv[j][i]] = 2;
				}
				i++;
			}
			i = 0;
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
