/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:31:43 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/07 03:49:06 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int divisao;
	int modulo;

	divisao = *a / *b;
	modulo = *a % *b;
	*a = divisao;
	*b = modulo;
}
