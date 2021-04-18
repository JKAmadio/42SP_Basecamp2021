/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:47:33 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:31:21 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    Escreva uma função recursiva que retorne o fatorial do número 
        passado como parâmetro.

        Se o argumento não for válido, a função deve retornar 0.

        Não se deve tratar "int overflow", o retorno da função será indefinido.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_recursive_factorial(int nb);
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

#include <stdio.h>

int main(void)
{
    for (int i = -5; i < 12 ; i++)
        printf("%i!: %i\n", i, ft_recursive_factorial(i));
    return (0);
}
