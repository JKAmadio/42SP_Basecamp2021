/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:16:07 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:44:36 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Escreva uma função recursiva que retorne uma potência de um número.

        Decidimos que 0 elevado a 0 deve retornar 1.

        Não se deve tratar "int overflow", o retorno da função será indefinido.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_recursive_power(int nb, int power);
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

#include <stdio.h>

int main(void)
{
    for (int i = -3; i < 3; i++)
        for (int j = -3; j < 3; j++)
            printf("%i elevado a %i = %i\n", i, j, ft_recursive_power(i, j));
    return (0);
}
