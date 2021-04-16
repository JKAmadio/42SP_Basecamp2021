/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:45:42 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/07 03:54:02 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int mudancas;

	mudancas = size * size;
	i = 0;
	while (i < size)
	{
		size--;
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
	}
}
