/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:13:08 by mbante            #+#    #+#             */
/*   Updated: 2020/02/16 19:50:51 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void clue3(int parametros[16], int mapa[4][4]);
void clue4(int parametros[16], int mapa[4][4]);
void clue1(int parametros[16], int mapa[4][4]);
void num3lineas(int mapa[4][4]);
int checker(int parametros[16], int mapa[4][4]);

int checkError(argc)
{
	if (argc != 2)
		return (0);
	else
		return (1);
}

void printmap(int mapa[4][4])
{
	int j;
	int i;
	char a;
	char b;
	char c;
	b = ' ';
	c = '\n';
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			a = mapa[i][j] + '0';
			write(1, &a, 1);
			if (j < 3)
				write(1, &b, 1);
			j++;
		}
		write(1, &c, 1);
		i++;
	}
}

void cleanmap(int mapa[4][4])
{
	int j;
	int i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mapa[i][j] = 0;
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int map[4][4];
	int param[16];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 32)
	{
		param[j] = argv[1][i] - '0';
		i = i + 2;
		j++;
	}
	if (checkError(argc) == 0)
		return (0);

	if (checker(param, map) == 1)
	{
		cleanmap(map);
		clue4(param, map);
		clue1(param, map);
		clue3(param, map);
		num3lineas(map);
		printmap(map);
	}
}
