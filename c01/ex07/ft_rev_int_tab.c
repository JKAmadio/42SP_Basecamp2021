/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:45:42 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:27:03 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex07    Escreva uma função que inverta a ordem dos elementos de uma 
        matriz de inteiros.

        Os parâmetros são um ponteiro para inteiro e o número de inteiros 
        na matriz.

        A função deverá ser prototipada da seguinte maneira:

            void    ft_rev_int_tab(int *tab, int size);
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i < size)
	{
		size--;
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
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
    ft_rev_int_tab(tab, size);
    for (int i = 0; i < size; i++)
        printf("%i ", tab[i]);
    printf("\n");
    return (0);
}
