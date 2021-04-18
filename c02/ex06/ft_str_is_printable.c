/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:49:22 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 15:19:15 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex06    Escreva uma função que retorne 1 se a string passada como parâmetro 
        só contiver caracteres imprimíveis e retorne 0 se a função contiver 
        outros tipos de caracteres.

        Ela deverá retornar 1 se str for uma string vazia.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_str_is_printable(char *str);
*/

int	ft_str_is_printable(char *str)
{
	int i;
	int nao_imprimivel;

	nao_imprimivel = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))
			nao_imprimivel++;
		i++;
	}
	if (nao_imprimivel != 0)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int main(void)
{
        char *str1 = "Hello World";
        char *str2 = "\n";
        char *str3 = "";

        printf("Hello World: %i\n", ft_str_is_printable(str1));
        printf("\\n: %i\n", ft_str_is_printable(str2));
        printf("str vazia: %i\n", ft_str_is_printable(str3));

}
