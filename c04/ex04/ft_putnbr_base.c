/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:55:39 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/04/18 18:08:21 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

ex04    Escreva uma função que mostre um número no terminal em uma base dada.

        Esse número é fornecido como um int e a base como uma cadeia de caracteres.

        A base contém todos os símbolos utilizáveis para mostrar o número:

            0123456789 é a base geralmente utilizada para representar 
            nossos números decimais;

            01 é uma base binária;

            0123456789ABCDEF é uma base hexadecimal;

            poneyvif é uma base octal.
    
        A função deve lidar com os números negativos.

        Se um parâmetro contiver um erro, a função não mostrará nada. Um erro pode ser:

            a base é vazia ou de tamanho 1;

            a base contém duas vezes o mesmo caractere;

            a base contém os caracteres + ou -.

        Ela deverá ser prototipada da seguinte maneira:

            void    ft_putnbr_base(int nbr, char *base);
*/

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

int     main(void)
{
    ft_putnbr_base(194023, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "01");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "poneyvif");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "1");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "repetida");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "012345+789");
    write(1, "\n", 1);
    ft_putnbr_base(194023, "012345-789");
    write(1, "\n", 1);
    return (0);
}







