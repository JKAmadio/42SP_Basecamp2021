/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:42:20 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 15:16:28 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex05    Escreva uma função que retorne 1 se a string passada como parâmetro 
        só contiver caracteres alfabéticos maiúsculos e retorne 0 se a 
        função contiver outros tipos de caracteres.

        Ela deverá retornar 1 se str for uma string vazia

        Ela deverá ser prototipada da seguinte maneira:

            int ft_str_is_uppercase(char *str);
*/

int	ft_str_is_uppercase(char *str)
{
	int i;
	int	nao_maiusculo;

	nao_maiusculo = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			nao_maiusculo++;
		i++;
	}
	if (nao_maiusculo != 0)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int main(void)
{
    char *str1 = "HELLOWORLD";
    char *str2 = "HELLO WORLD";
    char *str3 = "helloworld";
    char *str4 = ""; 

    printf("HELLOWORLD: %i\n", ft_str_is_uppercase(str1));
    printf("HELLO WORLD: %i\n", ft_str_is_uppercase(str2));
    printf("helloworld: %i\n", ft_str_is_uppercase(str3));
    printf("str vazia: %i\n", ft_str_is_uppercase(str4));
    return (0);
}
