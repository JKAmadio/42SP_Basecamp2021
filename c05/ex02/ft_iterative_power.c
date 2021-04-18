/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:48:01 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:39:27 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Escreva uma função iterativa que retorne uma potência de um número. 
        Uma potência inferior a 0 retornará 0.

        Decidimos que 0 elevado a 0 deve retornar 1.

        Não se deve tratar "int overflow", o retorno da função será indefinido.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_iterative_power(int nb, int power);
*/

int	ft_iterative_power(int nb, int power)
{
	int elevado;

	elevado = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			elevado *= nb;
			power--;
		}
	}
	return (elevado);
}

#include <stdio.h>

int main(void)
{
    for (int i = -3; i < 3; i++)
        for (int j = -3; j < 3; j++)
            printf("%i elevado a %i = %i\n", i, j, ft_iterative_power(i, j));
    return (0);
}
