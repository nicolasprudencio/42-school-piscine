/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:57:38 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/20 18:40:28 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / 10 > 0)
	{		
		ft_putnbr(nbr / 10);
	}
	nbr = nbr % 10 + '0';
	ft_putchar(nbr);
}

int	main(void)
{
	ft_putnbr(234);
	return (0);
}
