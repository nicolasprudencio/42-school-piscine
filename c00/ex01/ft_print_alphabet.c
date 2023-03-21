/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:11:51 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/08 18:15:11 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 'a';
	while (alphabet_letter <= 'z')
	{
		write(1, &alphabet_letter, 1);
		alphabet_letter++;
	}
}
