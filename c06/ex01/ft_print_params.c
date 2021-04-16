/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:54:39 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/16 14:06:10 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_print_str(char *str, int len);

int		main(int argc, char *argv[])
{
	int	i;
	int	arg_len;

	i = 1;
	while (i < argc)
	{
		arg_len = ft_strlen(argv[i]);
		ft_print_str(argv[i], arg_len);
		write(1, "\n", 1);
		i++;
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

void	ft_print_str(char *str, int len)
{
	write(1, str, len);
}
