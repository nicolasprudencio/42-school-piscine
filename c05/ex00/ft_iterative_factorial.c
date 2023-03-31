/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:06:13 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/22 15:24:24 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	aux;

	if (nb >= 0 && nb <= 1)
		return (1);
	if (nb < 0)
		return (0);
	aux = nb;
	aux -= 1;
	while (aux >= 1)
	{	
		nb = nb * aux;
		aux--;
	}
	return (nb);
}
