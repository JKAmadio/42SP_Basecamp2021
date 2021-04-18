/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:04:54 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:40:21 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    Escreva uma função que tenha um ponteiro para int em parâmetro e 
        dê ao int o valor de 42

        Ela deverá ser prototipada da seguinte maneira:

                void    ft_ft(int *nbr);
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int     main(void)
{
    int a;

    a = 2;
    ft_ft(&a);
    printf("%i\n", a);
    return (0);
}
