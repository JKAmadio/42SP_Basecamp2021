/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:23:37 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 14:44:59 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Escreva uma função que retorne 1 se a string passada como parâmetro 
        só contiver caracteres alfabéticos minúsculos e retorne 0 se a 
        função contiver outros tipos de caracteres.

        Ela deverá retornar 1 se str for uma string vazia.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_str_is_lowercase(char *str);
*/

int	ft_str_is_lowercase(char *str)
{
	int i;
	int nao_minusculo;

	nao_minusculo = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			nao_minusculo++;
		i++;
	}
	if (nao_minusculo != 0)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int main(void)
{
    char *str1 = "helloworld";
    char *str2 = "hello world";
    char *str3 = "HelloWorld";
    char *str4 = "";

    printf("helloworld: %i\n", ft_str_is_lowercase(str1));
    printf("hello world: %i\n", ft_str_is_lowercase(str2));
    printf("HelloWorld: %i\n", ft_str_is_lowercase(str3));
    printf("str vazia: %i\n", ft_str_is_lowercase(str4));
    return (0);
}
