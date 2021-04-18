/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:50:44 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 16:23:54 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex02    Reproduzir de forma idêntica o funcionamento da função strcat 
        (man strcat).

        Ela deverá ser prototipada da seguinte maneira:

            char *ft_strcat(char *dest, char *src);
*/

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int     main(void)
{
    char str1[12] = "Hello ";
    char str2[] = "World";

    printf("ft_strcat: %s\n", ft_strcat(str1, str2));

    char str3[12] = "Hello ";
    char str4[] = "World";
    printf("   strcat: %s\n", strcat(str3, str4));
    return (0);
}
