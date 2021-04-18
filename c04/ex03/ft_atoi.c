/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:53:06 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 17:56:30 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Escreva uma função que converta o início da cadeia apontada por str 
        em inteiro do tipo int

        str pode começar por um número arbitrário de ’white space’ 
        (como definido por isspace(3))

        str pode então ser seguido por um número arbitrário de sinais + e 
        sinais -. O sinal - vai mudar o sinal do inteiro retornado em função 
        do número de sinais - e se este for par ou ímpar.

        Por fim, str deverá ser composta por número da base 10

        Sua função deverá ler str desde que esta siga as regras acima e ela 
        deve retornar o número encontrado até então.

        Você não deve considerar os overflows e os underflows, o resultado 
        é considerado indefinido nesses casos.

        Você pode comparar sua função com a verdadeira função atoi, exceto 
        a parte dos sinais bem como do overflow.

        Veja um exemplo de um programa que mostra o valor de retorno de atoi:
            $>./a.out " ---+--+1234ab567"
            -1234

        Ela deverá ser prototipada da seguinte maneira:

            int ft_atoi(char *str);
*/

int	ft_atoi(char *str)
{
	int inteiro;
	int sinal;
	int i;

	inteiro = 0;
	sinal = 1;
	i = 0;
    while (str[i] != '\0' && str[i] == ' ')
            i++;
    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
		if (str[i] == '-')
			sinal *= -1;
		else if (str[i] == '+')
			sinal *= 1;
        i++;
    }
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		else if (str[i] >= '0' && str[i] <= '9')
			inteiro = inteiro * 10 + str[i] - '0';
		i++;
	}
	return (sinal * inteiro);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "1234";
    char str2[] = "-1234";
    char str3[] = " 1234";
    char str4[] = " -1234";
    char str5[] = " -12a34";
    char str6[] = " -12-34";
    char str7[] = " -12+34";
    char str8[] = " --12+34";
    char str9[] = " -+12+34";

    printf("ft_atoi: %i\n", ft_atoi(str1));
    printf("   atoi: %i\n", atoi(str1));
    printf("ft_atoi: %i\n", ft_atoi(str2));
    printf("   atoi: %i\n", atoi(str2));
    printf("ft_atoi: %i\n", ft_atoi(str3));
    printf("   atoi: %i\n", atoi(str3));
    printf("ft_atoi: %i\n", ft_atoi(str4));
    printf("   atoi: %i\n", atoi(str4));
    printf("ft_atoi: %i\n", ft_atoi(str5));
    printf("   atoi: %i\n", atoi(str5));
    printf("ft_atoi: %i\n", ft_atoi(str6));
    printf("   atoi: %i\n", atoi(str6));
    printf("ft_atoi: %i\n", ft_atoi(str7));
    printf("   atoi: %i\n", atoi(str7));
    printf("ft_atoi: %i\n", ft_atoi(str8));
    printf("ft_atoi: %i\n", ft_atoi(str9));
    return (0);
}











