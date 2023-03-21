/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:12:20 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/10 16:13:06 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	letter;

	while (*str != '\0')
	{
		letter = *str;
		str++;
		write(1, &letter, 1);
	}
}

int	main(void)
{
	char	arr[] = "hello world";

	ft_putstr(arr);
	return (0);
}
