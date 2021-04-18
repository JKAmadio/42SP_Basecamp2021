/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:09:26 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:59:22 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex07    Escreva uma função que retorne o número primo imediatamente 
        superior ou igual ao número passado como parâmetro.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_find_next_prime(int nb);
*/   

int ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (2);
	while (ft_is_prime(nb) != 1)
	{
		ft_is_prime(nb);
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i < 46340 && i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
    for (int i = -3; i < 150; i++)
        printf("O primo após %i eh %i\n", i, ft_find_next_prime(i));
    return(0);
}






