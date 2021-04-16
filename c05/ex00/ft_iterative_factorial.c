/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:54:11 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/13 17:46:20 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb == 0)
		factorial = 1;
	else if (nb < 0)
		factorial = 0;
	while (nb > 1)
	{
		factorial *= (nb - 1);
		nb--;
	}
	return (factorial);
}
