/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:20:23 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/11 21:11:00 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int i, int f)
{
	int	aux;

	aux = tab[i];
	tab[i] = tab[f];
	tab[f] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while(i < size)
	{
		x = i + 1;
		while (x < size)
		{
			if(tab[i] > tab[x])
			{
				ft_swap(tab, i, x);
			}
			x++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[] = {2, 4, 5, 7, 1};
	int	i;

	ft_sort_int_tab(arr, 6);
	i = 0;
	while(i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
