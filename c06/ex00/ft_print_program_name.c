/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:29:19 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 19:06:50 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    A questão aqui é sobre um programa, você deve, portanto, ter 
        uma função main no seu arquivo .c.

        Escreva um programa que mostre o nome do programa.

        Exemplo :

                $>./a.out
                ./a.out
                $>
*/

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	char	*programa;
	int		len_programa;

	programa = argv[argc - 1];
	len_programa = ft_strlen(programa);
	write(1, programa, len_programa);
	write(1, "\n", 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
