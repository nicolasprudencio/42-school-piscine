/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:03:42 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/09 11:39:34 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '9')
	{
		while (d <= '9')
		{	
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				if (c != '7' || d != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			d++;
			u = d + 1;
		}
		d = c + 1;
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
