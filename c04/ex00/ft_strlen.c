/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:13:09 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 17:10:48 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    Escreva uma função que contenha o número de caracteres em uma 
        cadeia de caracteres e que retorne o número encontrado.

        Ela deverá ser prototipada da seguinte maneira:

            int ft_strlen(char *str);
*/

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "Hello Wolrd";

    printf("%i\n", ft_strlen(str1));
    return (0);
}
