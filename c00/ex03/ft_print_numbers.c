/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:15:39 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:21:34 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Escreva uma função que mostre todos os números em uma única 
        linha em ordem crescente. 

        Ela deve ser prototipada da seguinte maneira:

                void ft_print_numbers(void);
*/
#include <unistd.h>

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

int     main(void)
{
    ft_print_numbers();
    return (0);
}
