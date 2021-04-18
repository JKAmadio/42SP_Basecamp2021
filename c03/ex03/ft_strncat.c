/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:27:48 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 16:37:57 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex03    Reproduzir de forma idêntica o funcionamento da função strncat 
        (man strncat).

        Ela deverá ser prototipada da seguinte maneira:

            char *ft_strncat(char *dest, char *src, unsigned int nb);
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Hello ";
    char str2[] = "World";
    unsigned int n1 = 1;
    unsigned int n2 = 3;
    unsigned int n3 = 7;

    printf("ft_strncat(n = 1): %s\n", ft_strncat(str1, str2, n1));
    printf("ft_strncat(n = 3): %s\n", ft_strncat(str1, str2, n2));
    printf("ft_strncat(n = 7): %s\n", ft_strncat(str1, str2, n3));

    char str3[20] = "Hello ";
    char str4[] = "World";
    unsigned int n4 = 1;
    unsigned int n5 = 3;
    unsigned int n6 = 7;

    printf("   strncat(n = 1): %s\n", strncat(str3, str4, n4));
    printf("   strncat(n = 3): %s\n", strncat(str3, str4, n5));
    printf("   strncat(n = 7): %s\n", strncat(str3, str4, n6));
    return (0);
}
