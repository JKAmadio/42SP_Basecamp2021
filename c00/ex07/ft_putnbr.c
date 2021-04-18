/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:57:08 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 21:32:25 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex07    Escreva uma função que mostre um número passado como parâmetro. 
        A função deverá ser capaz de representar qualquer um dos valores 
        possíveis em uma variável do tipo int.

        Ela deve ser prototipada da seguinte maneira:

                void ft_putnbr(int nb);
*/

#include <unistd.h>

void				ft_putnbr(int nb)
{
	char			lista_caracteres[10];
	unsigned int	nb_positivo;
	int				count;

	nb_positivo = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
        write(1, "\n", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb_positivo = nb * (-1);
	}
	count = 9;
	while (count >= 0)
	{
		lista_caracteres[count] = (nb_positivo % 10) + '0';
		nb_positivo = nb_positivo / 10;
		count--;
	}
	while (++count != 42 && nb != 0)
		nb = nb / 10;
	write(1, &lista_caracteres[10 - count], count);
    write(1, "\n", 1);
}

int                 main(void)
{
    ft_putnbr(-214748368);
    ft_putnbr(-8);
    ft_putnbr(0);
    ft_putnbr(8);
    ft_putnbr(214748367);
    return (0);
}
