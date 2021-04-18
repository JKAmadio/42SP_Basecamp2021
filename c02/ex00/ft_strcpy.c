/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:07:54 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/17 23:42:24 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    Reproduzir de forma idêntica o funcionamento da função strcpy 
        (man strcpy).

        Ela deverá ser prototipada da seguinte maneira:

            char    *ft_strcpy(char *dest, char *src);
*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    char *str1 = "Primeira frase";
    char *str2;
    char *str3 = "Segunda frase";
    char *str4;
    char *str5 = "Terceira frase";
    char *str6;

    str2 = malloc(sizeof(char));
    str4 = malloc(sizeof(char));
    str6 = malloc(sizeof(char));
    printf("%s\n",ft_strcpy(str2, str1));    
    printf("%s\n",ft_strcpy(str4, str3));    
    printf("%s\n",ft_strcpy(str6, str5));
    return (0);
}
