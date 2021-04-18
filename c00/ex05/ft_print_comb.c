/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:49:44 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:25:21 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex05    Escreva uma função que mostre, em ordem crescente, todas as diferentes
        combinações de três números diferentes em ordem crescente - sim, a 
        repetição é proposital.

        > Isso resulta em algo do tipo:
            $>./a.out | cat -e
            012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

        > 987 fica de fora porque o 789 já está presente

        > 999 fica de fora porque esse número não tem exclusivamente números 
        diferentes uns dos outros.

        Ela deve ser prototipada da seguinte maneira:
        
                void ft_print_comb(void);
*/
#include <unistd.h>

void	condicao(char cent, char dec, char uni);

void	ft_print_comb(void)
{
	char cent;
	char dec;
	char uni;

	cent = '0';
	dec = '0';
	uni = '0';
	while (cent <= '9')
	{
		while (dec <= '9')
		{
			while (uni <= '9')
			{
				condicao(cent, dec, uni);
				uni++;
			}
			uni = '0';
			dec++;
		}
		cent++;
		dec = '0';
	}
}

void	condicao(char cent, char dec, char uni)
{
	if (uni > cent && dec > cent && uni > dec)
	{
		write(1, &cent, 1);
		write(1, &dec, 1);
		write(1, &uni, 1);
		if (cent != '7')
			write(1, ", ", 2);
	}
}

int     main(void)
{
    ft_print_comb();
    return (0);
}
