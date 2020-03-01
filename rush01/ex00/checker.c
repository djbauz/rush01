/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 11:02:44 by mbante            #+#    #+#             */
/*   Updated: 2020/02/16 21:46:25 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nozero(int mapa[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (mapa[i][j] == 0)
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	checkerwhile1(int parametros[16], int mapa[4][4], int a)
{
	int row;
	int col;
	int count1;
	int count2;

	row = 0;
	col = 0;
	count1 = 1;
	count2 = 1;
	while (col + 1 <= 4)
	{
		while (row + 1 < 4)
		{
			mapa[row + 1][col] > mapa[row][col] ? count1++ : 0;
			mapa[col][row + 1] > mapa[col][row] ? count2++ : 0;
			row++;
		}
		row = 0;
		col++;
		count1 = 1;
		count2 = 1;
	}
	(count1 != parametros[col]) ? a = 1 : 0;
	(count2 != parametros[col + 8]) ? a = 1 : 0;
	return (a);
}

int	checkerwhile2(int parametros[16], int mapa[4][4], int a)
{
	int row;
	int col;
	int count1;
	int count2;

	col = 3;
	row = 3;
	while (col + 1 > 0)
	{
		while (row - 1 >= 0)
		{
			mapa[row - 1][col] > mapa[row][col] ? count1++ : 0;
			mapa[col][row - 1] > mapa[col][row] ? count2++ : 0;
			row--;
		}
		row = 3;
		col--;
		count1 = 1;
		count2 = 1;
	}
	(count1 != parametros[col + 12]) ? a = 1 : 0;
	(count2 != parametros[col + 4]) ? a = 1 : 0;
	return (a);
}

int	checker(int parametros[16], int mapa[4][4])
{
	int a;

	a = 0;
	if (nozero(mapa) == 1)
		return (1);
	checkerwhile1(parametros, mapa, a);
	checkerwhile2(parametros, mapa, a);
	return (0);
}
