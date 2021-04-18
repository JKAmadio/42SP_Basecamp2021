/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:55:59 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:20:50 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Escreva uma função que mostre o alfabeto em minúsculo em apenas 
        uma linha, emordem decrescente, começando pela letra ’z’

        Ela deve ser prototipada da seguinte maneira:

            void ft_print_reverse_alphabet(void);

 
 
*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
int     main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
