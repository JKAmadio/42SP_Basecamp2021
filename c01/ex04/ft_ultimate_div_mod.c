/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:31:43 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:05:40 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Escreva uma função que  divide os int apontados por a e b.

        O resultado da divisão está armazenado no int apontado por a.
        O resto da divisão será armazenado no int apontado por b.

        Essa função deverá ser prototipada da seguinte maneira:

                void    ft_ultimate_div_mod(int *a, int *b);
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int divisao;
	int modulo;

	divisao = *a / *b;
	modulo = *a % *b;
	*a = divisao;
	*b = modulo;
}

#include <stdio.h>

int     main(void)
{
    int a;
    int b;

    a = 59;
    b = 12;
    printf("antes: a = %i | b = %i\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("depois: a = %i | b = %i\n", a, b);
    return (0);
}
