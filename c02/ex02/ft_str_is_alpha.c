/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:37:33 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 14:01:54 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Escreva uma função que retorne 1 se a string passada como parâmetro 
        só contiver caracteres alfabéticos e retorne 0 se a função contiver
        outros tipos de caracteres.

        Ela deverá retornar 1 se str for uma string vazia.

        Ela deverá ser prototipada da seguinte maneira:
        
            int     ft_str_is_alpha(char *str);

*/

int	ft_str_is_alpha(char *str)
{
	int nao_alfabetico;
	int i;

	nao_alfabetico = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
			nao_alfabetico++;
		i++;
	}
	if (nao_alfabetico != 0)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int main(void)
{
    char *str1 = "Hello World!";
    char *str2 = "HelloWorld";
    char *str3 = "H3ll0W0rld";
    char *str4 = "";

    printf("Hello World: %i\n", ft_str_is_alpha(str1));
    printf("HelloWorld: %i\n", ft_str_is_alpha(str2));
    printf("H3ll0W0rld: %i\n", ft_str_is_alpha(str3));
    printf("str vazia: %i\n", ft_str_is_alpha(str4));
    return (0);
}
