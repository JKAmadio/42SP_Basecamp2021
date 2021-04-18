/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:51:03 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:17:08 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

ex00    Escreva uma função que mostre o caractere passado como parâmetro

        Ela deve ser prototipada da seguinte maneira:

                 void ft_putchar(char c);
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(void)
{
    ft_putchar('x');
    return (0);
}
