/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:36:09 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 16:16:23 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex01    Reproduzir de forma idêntica o funcionamento da função strncmp 
        (man strncmp).

        Ela deverá ser prototipada da seguinte maneira:

            int ft_strncmp(char *s1, char *s2, unsigned int n);
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n - 1 && s1[i] == s2[i])
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
    unsigned int n0 = 0;
    unsigned int n1 = 1;
    unsigned int n2 = 2;
    unsigned int n3 = 3;
    unsigned int n4 = 4;
    unsigned int n5 = 5;
    unsigned int n6 = 6;

    printf("Comparando str1 e str2\n");
    printf("ft_strncmp: n = 0 --> %i\n", ft_strncmp(str1, str2, n0));
    printf("   strncmp: n = 0 --> %i\n", strncmp(str1, str2, n0));
    printf("ft_strncmp: n = 1 --> %i\n", ft_strncmp(str1, str2, n1));
    printf("   strncmp: n = 1 --> %i\n", strncmp(str1, str2, n1));
    printf("ft_strncmp: n = 2 --> %i\n", ft_strncmp(str1, str2, n2));
    printf("   strncmp: n = 2 --> %i\n", strncmp(str1, str2, n2));
    printf("ft_strncmp: n = 3 --> %i\n", ft_strncmp(str1, str2, n3));
    printf("   strncmp: n = 3 --> %i\n", strncmp(str1, str2, n3));
    printf("ft_strncmp: n = 4 --> %i\n", ft_strncmp(str1, str2, n4));
    printf("   strncmp: n = 4 --> %i\n", strncmp(str1, str2, n4));
    printf("ft_strncmp: n = 5 --> %i\n", ft_strncmp(str1, str2, n5));
    printf("   strncmp: n = 5 --> %i\n", strncmp(str1, str2, n5));
    printf("ft_strncmp: n = 6 --> %i\n", ft_strncmp(str1, str2, n6));
    printf("   strncmp: n = 6 --> %i\n\n\n", strncmp(str1, str2, n6));

    printf("Comparando str1 e str3\n");
    printf("ft_strncmp: n = 0 --> %i\n", ft_strncmp(str1, str3, n0));
    printf("   strncmp: n = 0 --> %i\n", strncmp(str1, str3, n0));
    printf("ft_strncmp: n = 1 --> %i\n", ft_strncmp(str1, str3, n1));
    printf("   strncmp: n = 1 --> %i\n", strncmp(str1, str3, n1));
    printf("ft_strncmp: n = 2 --> %i\n", ft_strncmp(str1, str3, n2));
    printf("   strncmp: n = 2 --> %i\n", strncmp(str1, str3, n2));
    printf("ft_strncmp: n = 3 --> %i\n", ft_strncmp(str1, str3, n3));
    printf("   strncmp: n = 3 --> %i\n", strncmp(str1, str3, n3));
    printf("ft_strncmp: n = 4 --> %i\n", ft_strncmp(str1, str3, n4));
    printf("   strncmp: n = 4 --> %i\n", strncmp(str1, str3, n4));
    printf("ft_strncmp: n = 5 --> %i\n", ft_strncmp(str1, str3, n5));
    printf("   strncmp: n = 5 --> %i\n", strncmp(str1, str3, n5));
    printf("ft_strncmp: n = 6 --> %i\n", ft_strncmp(str1, str3, n6));
    printf("   strncmp: n = 6 --> %i\n\n\n", strncmp(str1, str3, n6));

    printf("Comparando str1 e str4\n");
    printf("ft_strncmp: n = 0 --> %i\n", ft_strncmp(str1, str4, n0));
    printf("   strncmp: n = 0 --> %i\n", strncmp(str1, str4, n0));
    printf("ft_strncmp: n = 1 --> %i\n", ft_strncmp(str1, str4, n1));
    printf("   strncmp: n = 1 --> %i\n", strncmp(str1, str4, n1));
    printf("ft_strncmp: n = 2 --> %i\n", ft_strncmp(str1, str4, n2));
    printf("   strncmp: n = 2 --> %i\n", strncmp(str1, str4, n2));
    printf("ft_strncmp: n = 3 --> %i\n", ft_strncmp(str1, str4, n3));
    printf("   strncmp: n = 3 --> %i\n", strncmp(str1, str4, n3));
    printf("ft_strncmp: n = 4 --> %i\n", ft_strncmp(str1, str4, n4));
    printf("   strncmp: n = 4 --> %i\n", strncmp(str1, str4, n4));
    printf("ft_strncmp: n = 5 --> %i\n", ft_strncmp(str1, str4, n5));
    printf("   strncmp: n = 5 --> %i\n", strncmp(str1, str4, n5));
    printf("ft_strncmp: n = 6 --> %i\n", ft_strncmp(str1, str4, n6));
    printf("   strncmp: n = 6 --> %i\n\n\n", strncmp(str1, str4, n6));


    printf("Comparando str1 e str5\n");
    printf("ft_strncmp: n = 0 --> %i\n", ft_strncmp(str1, str5, n0));
    printf("   strncmp: n = 0 --> %i\n", strncmp(str1, str5, n0));
    printf("ft_strncmp: n = 1 --> %i\n", ft_strncmp(str1, str5, n1));
    printf("   strncmp: n = 1 --> %i\n", strncmp(str1, str5, n1));
    printf("ft_strncmp: n = 2 --> %i\n", ft_strncmp(str1, str5, n2));
    printf("   strncmp: n = 2 --> %i\n", strncmp(str1, str5, n2));
    printf("ft_strncmp: n = 3 --> %i\n", ft_strncmp(str1, str5, n3));
    printf("   strncmp: n = 3 --> %i\n", strncmp(str1, str5, n3));
    printf("ft_strncmp: n = 4 --> %i\n", ft_strncmp(str1, str5, n4));
    printf("   strncmp: n = 4 --> %i\n", strncmp(str1, str5, n4));
    printf("ft_strncmp: n = 5 --> %i\n", ft_strncmp(str1, str5, n5));
    printf("   strncmp: n = 5 --> %i\n", strncmp(str1, str5, n5));
    printf("ft_strncmp: n = 6 --> %i\n", ft_strncmp(str1, str5, n6));
    printf("   strncmp: n = 6 --> %i\n\n\n", strncmp(str1, str5, n6));


    printf("Comparando str1 e str6\n");
    printf("ft_strncmp: n = 0 --> %i\n", ft_strncmp(str1, str6, n0));
    printf("   strncmp: n = 0 --> %i\n", strncmp(str1, str6, n0));
    printf("ft_strncmp: n = 1 --> %i\n", ft_strncmp(str1, str6, n1));
    printf("   strncmp: n = 1 --> %i\n", strncmp(str1, str6, n1));
    printf("ft_strncmp: n = 2 --> %i\n", ft_strncmp(str1, str6, n2));
    printf("   strncmp: n = 2 --> %i\n", strncmp(str1, str6, n2));
    printf("ft_strncmp: n = 3 --> %i\n", ft_strncmp(str1, str6, n3));
    printf("   strncmp: n = 3 --> %i\n", strncmp(str1, str6, n3));
    printf("ft_strncmp: n = 4 --> %i\n", ft_strncmp(str1, str6, n4));
    printf("   strncmp: n = 4 --> %i\n", strncmp(str1, str6, n4));
    printf("ft_strncmp: n = 5 --> %i\n", ft_strncmp(str1, str6, n5));
    printf("   strncmp: n = 5 --> %i\n", strncmp(str1, str6, n5));
    printf("ft_strncmp: n = 6 --> %i\n", ft_strncmp(str1, str6, n6));
    printf("   strncmp: n = 6 --> %i\n\n\n", strncmp(str1, str6, n6));
    return (0);
}
