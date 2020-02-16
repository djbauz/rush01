/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   techniques.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 11:02:23 by mbante            #+#    #+#             */
/*   Updated: 2020/02/16 20:55:11 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		rellena1while1(int mapa[4][4], int a)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (col < 4)
	{
		if (mapa[row][col] == a)
		{
			col = 0;
			row++;
		}
		else
			col++;
	}
	return (row);
}

int		rellena1while2(int mapa[4][4], int a)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		if (mapa[row][col] == a)
		{
			row = 0;
			col++;
		}
		else
			row++;
	}
	return (col);
}

void	rellena1(int mapa[4][4], int a)
{
	int row;
	int col;
	int rowcorrecta;

	row = 0;
	col = 0;
	rowcorrecta = rellena1while1(mapa, a);
	col = rellena1while2(mapa, a);
	mapa[rowcorrecta][col] = a;
}

void	num3lineas(int mapa[4][4])
{
	int n;
	int x;
	int y;
	int count;

	n = 1;
	while (n <= 4)
	{
		x = 0;
		y = 0;
		count = 0;
		while (x < 4)
		{
			while (y < 4)
			{
				mapa[x][y] == n ? count++ : 0;
				y++;
			}
			y = 0;
			x++;
		}
		count == 3 ? rellena1(mapa, n) : 0;
		n++;
	}
}
