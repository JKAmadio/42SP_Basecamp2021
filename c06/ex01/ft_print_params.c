/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:54:39 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 19:09:34 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    A questão aqui é sobre um programa, você deve, portanto, ter uma 
        função main no seu arquivo arquivo .c.

        Escreva um programa que mostre os argumentos recebidos na 
        linha de comando.

        Um por linha na mesma ordem da linha de comando

        Você deve mostrar todos os argumentos, menos argv[0].

        Exemplo :

            $>./a.out test1 test2 test3
            test1
            test2
            test3
            $>
*/

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_print_str(char *str, int len);

int		main(int argc, char *argv[])
{
	int	i;
	int	arg_len;

	i = 1;
	while (i < argc)
	{
		arg_len = ft_strlen(argv[i]);
		ft_print_str(argv[i], arg_len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_print_str(char *str, int len)
{
	write(1, str, len);
}
