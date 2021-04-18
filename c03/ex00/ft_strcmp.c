/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:11:16 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 15:50:51 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex00    Reproduzir de forma idêntica o funcionamento da função strcmp 
        (man strcmp).

        Ela deverá ser prototipada da seguinte maneira:

            int ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "ABCDEF";
    char *str2 = "ABCDEF";
    char *str3 = "ABGDEF";
    char *str4 = "ABCDEB";
    char *str5 = "abcdef";
    char *str6 = "";

    printf("ft_strcomp: %i\n", ft_strcmp(str1, str2));
    printf("   strcomp: %i\n", strcmp(str1, str2));
    printf("ft_strcomp: %i\n", ft_strcmp(str1, str3));
    printf("   strcomp: %i\n", strcmp(str1, str3));
    printf("ft_strcomp: %i\n", ft_strcmp(str1, str4));
    printf("   strcomp: %i\n", strcmp(str1, str4));
    printf("ft_strcomp: %i\n", ft_strcmp(str1, str5));
    printf("   strcomp: %i\n", strcmp(str1, str5));
    printf("ft_strcomp: %i\n", ft_strcmp(str1, str6));
    printf("   strcomp: %i\n", strcmp(str1, str6));
    return (0);
}
