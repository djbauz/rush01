/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:26:40 by mbante            #+#    #+#             */
/*   Updated: 2020/02/16 20:53:23 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	clue4while1(int parametros[16], int mapa[4][4])
{
	int i;
	int j;
	int v;
	int p;

	p = 0;
	while (p < 4)
	{
		v = 1;
		i = 0;
		j = p;
		if (parametros[p] == 4)
		{
			while (i < 4)
			{
				if (mapa[i][j] == 0)
					mapa[i][j] = v;
				i++;
				v++;
			}
		}
		p++;
	}
}

void	clue4while2(int parametros[16], int mapa[4][4])
{
	int i;
	int j;
	int v;
	int p;

	p = 4;
	while (p < 8)
	{
		v = 1;
		i = 3;
		j = p - 4;
		if (parametros[p] == 4)
		{
			while (i >= 0)
			{
				if (mapa[i][j] == 0)
					mapa[i][j] = v;
				i--;
				v++;
			}
		}
		p++;
	}
}

void	clue4while3(int parametros[16], int mapa[4][4])
{
	int i;
	int j;
	int v;
	int p;

	p = 8;
	while (p < 12)
	{
		v = 1;
		j = 0;
		i = p - 8;
		if (parametros[p] == 4)
		{
			while (j < 4)
			{
				if (mapa[i][j] == 0)
					mapa[i][j] = v;
				j++;
				v++;
			}
		}
		p++;
	}
}

void	clue4while4(int parametros[16], int mapa[4][4])
{
	int i;
	int j;
	int v;
	int p;

	p = 12;
	while (p < 16)
	{
		v = 1;
		j = 3;
		i = p - 12;
		if (parametros[p] == 4)
		{
			while (j >= 0)
			{
				if (mapa[i][j] == 0)
					mapa[i][j] = v;
				j--;
				v++;
			}
		}
		p++;
	}
}

void	clue4(int parametros[16], int mapa[4][4])
{
	clue4while1(parametros, mapa);
	clue4while2(parametros, mapa);
	clue4while3(parametros, mapa);
	clue4while4(parametros, mapa);
}
