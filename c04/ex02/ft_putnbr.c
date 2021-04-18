/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:37:10 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 17:19:10 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Escreva uma função que mostre um número passado como parâmetro. 
        A função deverá ser capaz de mostrar qualquer um dos  valores 
        possíveis em uma variável de tipo int.

        Ela deverá ser prototipada da seguinte maneira:

            void ft_putnbr(int nb);
*/

#include <unistd.h>

void		ft_write_nb(char c)
{
	write(1, &c, 1);
}

int			ft_transf_invert(int nb)
{
	char n;

	if (nb >= 10)
		ft_transf_invert(nb / 10);
	n = ((nb % 10) + '0');
	write(1, &n, 1);
	return (0);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else
		ft_transf_invert(nb);
}

int     main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(48);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    return (0); 
}
