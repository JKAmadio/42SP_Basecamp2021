/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:26:22 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:00:08 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Escreva uma função que divide dois parâmetros a e b e armazena o
        resultado no int apontado por div. Ela também armazena o resto da
        divisão de a e b no int apontado por mod.

        Ela deverá ser prototipada da seguinte maneira:

            void    ft_div_mod(int a, int b, int *div, int *mod);
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int     main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 59;
    b = 12;
    ft_div_mod(a, b, &div, &mod);
    printf("div = %i | mod = %i\n", div, mod);
    return (0);
}
