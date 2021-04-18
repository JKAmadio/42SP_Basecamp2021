/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:24:38 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:48:11 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    Escreva uma função que tenha um ponteiro para ponteiro para ponteiro 
        para ponteiro para ponteiro para ponteiro para ponteiro para ponteiro
        para ponteiro para int em parâmetro e dê ao int o valor de 42.

        Ela deverá ser prototipada da seguinte maneira:
        
            void    ft_ultimate_ft(int *********nbr);
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int     main(void)
{
    int a;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;

    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;
    ft_ultimate_ft(ptr9);
    printf("%i\n", a);
    return (0);
}
