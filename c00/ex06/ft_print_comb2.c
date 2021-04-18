/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 01:05:30 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:27:37 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex06    Escreva uma função que mostre todas as diferentes combinações de 
        dois números entre 0 e 99, em ordem crescente.

        > Isso resulta em algo do tipo:
            $>./a.out | cat -e
            00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 
            97 99, 98 99$>

        Ela deve ser prototipada da seguinte maneira:

                void ft_print_comb2(void);
*/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i++ < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(void)
{
    ft_print_comb2();
    return (0);
}
