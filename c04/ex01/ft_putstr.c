/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:05:46 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/19 18:14:17 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "oi estou aqui";

	ft_putstr(str);
	return (0);
}
