/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:35:32 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:09:39 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex05    Escreva uma função que mostre um a um os caracteres de uma 
        string na tela.

        O endereço do primeiro caractere da string está contido no ponteiro 
        passado como parâmetro para a função.

        Ela deverá ser prototipada da seguinte maneira:

                void    ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int     main(void)
{
    char *str1;

    str1 = "Hello World!";
    ft_putstr(str1);
    write(1, "\n", 1);
    return (0);
}
