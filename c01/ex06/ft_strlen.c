/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:57:00 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 22:13:12 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex06    Escreva uma função que contenha o número de caracteres em uma string 
        de caracteres que retorne ao número encontrado.

        Ela deverá ser prototipada da seguinte maneira:

            int     ft_strlen(char *str);
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

#include <stdio.h>

int main(void)
{
    char *str1;
    
    str1 = "Hello World!";
    printf("comprimento: %i\n", ft_strlen(str1));
    return (0);    
}
