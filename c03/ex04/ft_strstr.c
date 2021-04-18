/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:02:06 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 16:54:48 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Reproduzir de forma idêntica o funcionamento da função strstr 
        (man strstr).

        Ela deverá ser prototipada da seguinte maneira:

            char    *ft_strstr(char *str, char *to_find);
*/

int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		str_len;
	int		to_find_len;
	int		i;
	int		j;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = -1;
	if (to_find_len == 0)
		return (str);
	while (i++ < str_len)
	{
		j = 0;
		while (j < to_find_len)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
			if (j == to_find_len)
				return (&str[i]);
		}
		if (j == to_find_len)
			break ;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>

int     main(void)
{
    char str1[] = "Hello wonderful world";
    char str2[] = "wond";
    char str3[] = "earth";
    char str4[] = "";

    printf("ft_strstr: %s\n", ft_strstr(str1, str2));
    printf("   strstr: %s\n", strstr(str1, str2));
    printf("ft_strstr: %s\n", ft_strstr(str1, str3));
    printf("   strstr: %s\n", strstr(str1, str3));
    printf("ft_strstr: %s\n", ft_strstr(str1, str4));
    printf("   strstr: %s\n", strstr(str1, str4));

    return (0);
}
