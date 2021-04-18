/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 04:08:45 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 19:10:52 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    A questão aqui é sobre um programa, você deve, portanto, ter uma 
        função main no seu arquivo arquivo .c.

        Escreva um programa que mostre os argumentos recebidos na 
        linha de comando.

        Um por linha na ordem inversa da linha de comando.

        Você deve mostrar todos os argumentos, menos argv[0].
*/

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
