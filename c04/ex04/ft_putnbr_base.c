/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:04:43 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/21 00:58:31 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nb, char *base)
{
	long int	nbr;
	int			base_type;

	nbr = nb;
	base_type = ft_baselen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / base_type > 0)
	{
		ft_putnbr(nbr / base_type, base);
	}
	nbr = nbr % base_type;
	ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr(nbr, base);
}

int	main(void)
{
	ft_putnbr_base(25, "ab");
	return (0);
}

// os números de caracteres na variável base, determina qual é o tipo de pase que estaremos utilizando