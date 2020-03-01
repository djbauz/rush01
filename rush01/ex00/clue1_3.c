/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue1_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:43:31 by mbante            #+#    #+#             */
/*   Updated: 2020/02/16 21:36:01 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	clue1(int parametros[16], int mapa[4][4])
{
	int i;
	int *test;
	int p;

	test = malloc(16);
	p = 0;
	i = 0;
	while (p < 16)
	{
		if (parametros[p] == 1)
		{
			if (p >= 0 && p < 4)
				mapa[0][p - 0] = 4;
			if (p >= 4 && p < 8)
				mapa[3][p - 4] = 4;
			if (p >= 8 && p < 12)
				mapa[p - 8][0] = 4;
			if (p >= 12 && p < 16)
				mapa[p - 12][3] = 4;
			test[i] = p;
			i++;
		}
		p++;
	}
}

void	clue3(int parametros[16], int mapa[4][4])
{
	int i;
	int j;
	int p;

	p = 8;
	while (p >= 8 && p < 12)
	{
		if (parametros[p] == 3)
		{
			j = 2;
			i = 0;
			while (i < 3)
			{
				if (mapa[i][j] == 4)
				{
					j++;
					break ;
				}
				else
					i++;
			}
			(i == 4) ? (mapa[p - 8][j] = 4) : 0;
		}
		p++;
	}
}
