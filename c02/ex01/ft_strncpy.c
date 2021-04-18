/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:24:42 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 00:01:08 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    Reproduzir de forma idêntica o funcionamento da função strncpy 
        (man strncpy).

        Ela deverá ser prototipada da seguinte maneira:

        char    *ft_strncpy(char *dest, char *src, unsigned int n);
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(void)
{
    char            *str1 = "Hello World";
    char            *str2;
    char            *str3 = "How are you?";
    char            *str4;
    char            *str5 = "Hi there!";
    char            *str6;
    unsigned int    n1;
    unsigned int    n2;
    unsigned int    n3;
    unsigned int    n4;

    n1 = 3;
    n2 = 7;
    n3 = 13;
    n4 = 16;
    str2 = malloc(sizeof(char) * 20);
    str4 = malloc(sizeof(char) * 20);
    str6 = malloc(sizeof(char) * 20);
    printf("Primeiros testes: str1 copiando para str2\n");
    printf("%s\n", ft_strncy(str2, str1, n1));
    printf("%s\n", ft_strncy(str2, str1, n2));
    printf("%s\n", ft_strncy(str2, str1, n3));
    printf("%s\n", ft_strncy(str2, str1, n4));
    printf("Segunda bateria: str3 copiando para str4\n");
    printf("%s\n", ft_strncy(str4, str3, n1));
    printf("%s\n", ft_strncy(str4, str3, n2));
    printf("%s\n", ft_strncy(str4, str3, n3));
    printf("%s\n", ft_strncy(str4, str3, n4));
    printf("Última bateria: str5 copiando para str6\n");
    printf("%s\n", ft_strncy(str6, str5, n1));
    printf("%s\n", ft_strncy(str6, str5, n2));
    printf("%s\n", ft_strncy(str6, str5, n3));
    printf("%s\n", ft_strncy(str6, str5, n4));
    return(0);
}
