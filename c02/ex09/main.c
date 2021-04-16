/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:33:07 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/15 14:54:27 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"
	char str2[] = "Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um"

	printf("frase 1 original: %s\n", str1);
	printf("frase 1 transfor: %s\n", ft_strcapitalize(str1);
	printf("frase 2 original: %s\n", str2);
	printf("frase 2 transfor: %s\n", ft_strcapitalize(str2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	str = ft_lowercase(str);
	if (ft
}

char	*ft_strlowercase(char *str)
{
	int	i;

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

int		ft_char_is_alphanumeric(char c)
{
	int i;
	int not_alphanumeric
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			not_alphanumaric++;
		i++;
	}
	if (not_alphanumeric != 0)
		return (0);
	else
		return (1);
}













