/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:22:47 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/23 02:17:50 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	number_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!number_is_prime(nb) && nb < 2147483647)
		nb++;
	return (nb);
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_find_next_prime(25));
	return (0);
}