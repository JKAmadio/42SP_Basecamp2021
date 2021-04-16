/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:37:33 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/10 17:40:00 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int nao_alfabetico;
	int i;

	nao_alfabetico = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
			nao_alfabetico++;
		i++;
	}
	if (nao_alfabetico != 0)
		return (0);
	else
		return (1);
}
