/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:23:45 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 17:14:01 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    Escreva uma função que mostre um a um os caracteres de uma string 
        na tela.

        O endereço do primeiro caractere da cadeia está contido no ponteiro 
        passado como parâmetro na função.

        Ela deverá ser prototipada da seguinte maneira:

            void    ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int     main(void)
{
    char str1[] = "Hello World";
    ft_putstr(str1);
    write(1, "\n", 1);
    return (0);
}
