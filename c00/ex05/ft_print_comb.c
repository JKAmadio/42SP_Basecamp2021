/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:49:44 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/06 00:58:22 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	condicao(char cent, char dec, char uni);

void	ft_print_comb(void)
{
	char cent;
	char dec;
	char uni;

	cent = '0';
	dec = '0';
	uni = '0';
	while (cent <= '9')
	{
		while (dec <= '9')
		{
			while (uni <= '9')
			{
				condicao(cent, dec, uni);
				uni++;
			}
			uni = '0';
			dec++;
		}
		cent++;
		dec = '0';
	}
}

void	condicao(char cent, char dec, char uni)
{
	if (uni > cent && dec > cent && uni > dec)
	{
		write(1, &cent, 1);
		write(1, &dec, 1);
		write(1, &uni, 1);
		if (cent != '7')
			write(1, ", ", 2);
	}
}
