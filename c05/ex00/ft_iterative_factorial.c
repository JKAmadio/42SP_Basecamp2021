/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:54:11 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:26:16 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    Escreva uma função iterativa que retorne um número. Esse número 
        deve ser o resultado da operação fatorial a partir do número passado 
        como parâmetro.

        Se o argumento não for válido, a função deve retornar 0.

        Não se deve tratar "int overflow", o retorno da função será indefinido.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_iterative_factorial(int nb);
*/

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb == 0)
		factorial = 1;
	else if (nb < 0)
		factorial = 0;
	while (nb > 1)
	{
		factorial *= (nb - 1);
		nb--;
	}
	return (factorial);
}

#include <stdio.h>

int main(void)
{
    for (int i = -5; i < 12 ; i++)
        printf("%i!: %i\n", i, ft_iterative_factorial(i));
    return (0);    
}
