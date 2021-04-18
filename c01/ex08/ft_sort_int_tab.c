/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:46:30 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:37:35 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex08    Escreva uma função que ordene uma matriz de inteiros em ordem 
        crescente.

        Os parâmetros são um ponteiro para inteiro e o número de inteiros 
        na matriz.

        A função deverá ser prototipada da seguinte maneira:

            void    ft_sort_int_tab(int *tab, int size);
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int count;

	count = 1;
	while (count != 0)
	{
		count = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				count++;
			}
			i++;
		}
	}
}


#include <stdio.h>

int     main(void)
{
    int tab[5] = {87, 93, 140, 2, 13};
    int size = 5;

    for (int i = 0; i < size; i++)
        printf("%i ", tab[i]);
    printf("\n");
    ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++)
        printf("%i ", tab[i]);
    printf("\n");
    return (0);
}



















