/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:48:50 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/08 20:09:35 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int nb);

int	main(void)
{
	ft_printnbr(33);
	return (0);
}

void	ft_printnbr(int nb)
{
	char	c;
	int		byte;	

	c = nb;
	byte = c;
	write(1, &byte, 3);
}
