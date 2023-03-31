/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:07:53 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/09 22:20:44 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
	printf("%d\n%d", *a, *b);
}

int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
