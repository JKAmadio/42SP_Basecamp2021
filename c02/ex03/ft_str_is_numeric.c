/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:08:31 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 14:07:50 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Escreva uma função que retorne 1 se a string passada como parâmetro 
        só contiver números e retorne 0 se a função contiver outros 
        tipos de caracteres.

        Ela deverá retornar 1 se str for uma string vazia.

        Ela deverá ser prototipada da seguinte maneira:
        
                int ft_str_is_numeric(char *str);

*/

int	ft_str_is_numeric(char *str)
{
	int i;
	int nao_numerico;

	nao_numerico = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			nao_numerico++;
		i++;
	}
	if (nao_numerico != 0)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int main(void)
{
    char *str1 = "123456789";
    char *str2 = "12e456t89";
    char *str3 = "1234 6789";
    char *str4 = "";

    printf("123456789: %i\n", ft_str_is_numeric(str1));
    printf("12e456t89: %i\n", ft_str_is_numeric(str2));
    printf("1234 6789: %i\n", ft_str_is_numeric(str3));
    printf("str vazia: %i\n", ft_str_is_numeric(str4));
    return (0);
}
