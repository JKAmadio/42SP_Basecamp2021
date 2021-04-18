/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:21:15 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:53:04 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex05    Escreva uma função que retorne a raiz quadrada inteira de um número 
        se ela existir, e 0 se a raiz quadrada não for inteira.

        Ela deverá ser prototipada da seguinte maneira:

                int ft_sqrt(int nb);
*/

int	ft_sqrt(int nb)
{
	int i;
	int resultado;

	i = 0;
	while (i <= 46340)
	{
		resultado = i * i;
		if (nb == resultado)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
    for (int i = -5; i < 150; i++)
        printf("a raiz quadrada de %i eh %i\n", i, ft_sqrt(i));
    return (0);
}
