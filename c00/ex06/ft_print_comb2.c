/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:22:34 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/09 11:47:48 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_integer(int a, int b)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = (a / 10) + '0';
	d = (a % 10) + '0';
	e = (b / 10) + 48;
	f = (b % 10) + 48;
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, " ", 1);
	write (1, &e, 1);
	write (1, &f, 1);
	if (a != 98)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{	
			ft_convert_integer(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
