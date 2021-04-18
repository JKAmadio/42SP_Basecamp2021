/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:55:59 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:18:58 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex 01   Escreva uma função que mostre o alfabeto em minúsculo em apenas 
        uma linha, em ordem crescente, começando pela letra ’a’.

        Ela deve ser prototipada da seguinte maneira:
        
                void ft_print_alphabet(void);
*/

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

int     main(void)
{
    ft_print_alphabet();
    return (0);
}
