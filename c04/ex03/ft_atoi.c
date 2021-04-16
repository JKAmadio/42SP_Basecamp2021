/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:53:06 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/13 22:16:00 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int inteiro;
	int sinal;
	int i;

	inteiro = 0;
	sinal = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sinal *= -1;
		else if (str[i] == '+')
			sinal *= 1;
		else if ((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z'))
			break ;
		else if (str[i] >= '0' && str[i] <= '9')
			inteiro = inteiro * 10 + str[i] - '0';
		i++;
	}
	return (sinal * inteiro);
}
