/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:57:38 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:50:01 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Escreva uma função ft_fibonacci que retorne o n-iésimo elemento da 
        sequência de Fibonacci, sendo o primeiro elemento com índice 0. 
        Vamos considerar que a sequência de Fibonacci começa por 0, 1, 1, 2.

        Overflows não devem ser tratados.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_fibonacci(int index);

        Evidentemente, ft_fibonacci deverá ser recursiva.

        Se index for inferior a 0, a função retornará -1.
*/

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int main(void)
{
    for (int i = -3; i < 20; i++)
        printf("%i, ", ft_fibonacci(i));
    printf("\n");
    return (0);
}
