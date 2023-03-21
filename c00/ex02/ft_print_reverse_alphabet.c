/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:52:35 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/08 18:15:32 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 'z';
	while (alphabet_letter >= 'a')
	{
		write(1, &alphabet_letter, 1);
		alphabet_letter--;
	}
}
