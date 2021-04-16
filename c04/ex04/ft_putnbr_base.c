/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:55:39 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/16 20:18:07 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_validation(char *base);
int		ft_strlen(char *str);
void	ft_rev_str(char *str, int str_length);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	char	str[33];
	int		i;
	long	number;

	number = nbr;
	if (ft_validation(base) == 1)
		return ;
	base_length = ft_strlen(base);
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	i = 0;
	while (number > 0 || i == 0)
	{
		str[i] = base[number % base_length];
		number /= base_length;
		i++;
	}
	str[i] = '\0';
	ft_rev_str(str, i);
	write(1, str, i);
	write(1, "\n", 1);
}

int		ft_validation(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
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

void	ft_rev_str(char *str, int str_length)
{
	char	temp;
	int		i;

	i = 0;
	while (i < str_length)
	{
		str_length--;
		temp = str[i];
		str[i] = str[str_length];
		str[str_length] = temp;
		i++;
	}
}
