/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:34:36 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 15:35:56 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex08    Escreva uma função que deixe todas as letras em minúsculo.

        Ela deverá retornar str.

        Ela deverá ser prototipada da seguinte maneira:
        
            char    *ft_strlowcase(char *str);
*/

char		*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int     main(void)
{
    char str1[] = "hello world";
    char str2[] = "HELLO WORLD";
    char str3[] = "HeLlO WoRlD";
    char str4[] = "1234ABCDefgh";
    
    printf("hello world: %s\n", ft_strlowcase(str1));
    printf("HELLO WORLD: %s\n", ft_strlowcase(str2));
    printf("HeLlO WoRlD: %s\n", ft_strlowcase(str3));
    printf("1234ABCDefgh: %s\n", ft_strlowcase(str4));
    return (0);
}
