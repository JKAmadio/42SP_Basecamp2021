/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:49:05 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:56:26 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex06    Escreva uma função que retorne 1 se o número for primo e 0 se não for.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_is_prime(int nb);

        0 e 1 não são primos
*/

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
    for (int i = -5; i < 50; i++)
        printf("%i eh primo? %i\n", i, ft_is_prime(i));
    return (0);
}
