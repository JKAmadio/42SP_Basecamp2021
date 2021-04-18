/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:51:44 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:17:14 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Escreva uma função que mostre ’N’ ou ’P’ segundo o sinal do 
        inteiro passado como parâmetro. Se n for negativo, indique ’N’. 
        Se n for positivo ou nulo, indique ’P’.

        Ela deve ser prototipada da seguinte maneira:

                void ft_is_negative(int n);

*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

int     main(void)
{
    ft_is_negative(-1);
    ft_is_negative(0);
    ft_is_negative(1);
    return (0);
}
