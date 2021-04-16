/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:29:19 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/16 14:19:44 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	char	*programa;
	int		len_programa;
	int		argumentos;

	argumentos = argc;
	programa = argv[0];
	len_programa = ft_strlen(programa);
	write(1, programa, len_programa);
	write(1, "\n", 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
