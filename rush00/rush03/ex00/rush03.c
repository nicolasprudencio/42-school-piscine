/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:56:31 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/05 19:14:52 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int x);
void	mid_line(int x);
void	last_line(int x);
void	rush(int x, int y);

void	first_line(int x)

{
	int	column_counter;

	column_counter = 1;
	if (column_counter == 1)
	{
		ft_putchar('A');
		column_counter++;
		if (x == 1)
		{
			ft_putchar('\n');
		}
	}
	while (column_counter < x)
	{
		ft_putchar ('B');
		column_counter++;
	}
	if (column_counter == x)
	{
		write(1, "C\n", 2);
		column_counter++;
	}
}

void	mid_line(int x)
{
	int	column_counter;

	column_counter = 1;
	if (column_counter == 1)
	{
		ft_putchar('B');
		column_counter++;
		if (x == 1)
		{
			ft_putchar('\n');
		}
	}
	while (column_counter < x)
	{
		ft_putchar(' ');
		column_counter++;
	}
	if (column_counter == x)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
	int	column_counter;

	column_counter = 1;
	if (column_counter == 1)
	{
		ft_putchar('A');
		column_counter++;
		if (x == 1)
		{
			ft_putchar('\n');
		}
	}
	while (column_counter < x)
	{
		ft_putchar('B');
		column_counter++;
	}
	if (column_counter == x)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (y <= 0 || x <= 0)
		return ;
	if (line_counter == 1)
	{
		first_line(x);
		line_counter++;
	}
	while (y >= 3)
	{
		mid_line(x);
		line_counter++;
		if (line_counter == y)
		{
			break ;
		}
	}
	if (line_counter == y)
	{
		last_line(x);
		line_counter++;
	}	
}
