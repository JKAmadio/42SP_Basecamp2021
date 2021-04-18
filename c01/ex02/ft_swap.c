/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:16:58 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:53:11 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Escreva uma função que troque o conteúdo de dois inteiros cujos 
        endereços são dados em parâmetros.

        Ela deverá ser prototipada da seguinte maneira:

                void    ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int     main(void)
{
    int a;
    int b;

    a = 2;
    b = 5;
    printf("antes: a = %i | b = %i\n", a, b);
    ft_swap(&a, &b);
    printf("depois: a = %i | b = %i\n", a, b);
    return (0);
}
