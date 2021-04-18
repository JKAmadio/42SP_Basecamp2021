/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:59:13 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 15:30:23 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex07    Escreva uma função que deixe todas as letras em maiúsculo.

        Ela deverá retornar str.

        Ela deverá ser prototipada da seguinte maneira:
        
            char    *ft_strupcase(char *str);
*/

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
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

    printf("hello world --> %s\n", ft_strupcase(str1));
    printf("HELLO WORLD --> %s\n", ft_strupcase(str2));
    printf("HeLlO WoRlD --> %s\n", ft_strupcase(str3));
    printf("1234ABCDefgh --> %s\n", ft_strupcase(str4));
    return (0);
}
