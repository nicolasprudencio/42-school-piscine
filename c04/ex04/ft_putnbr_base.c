/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:04:43 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/21 17:36:28 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_validate(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	j = 0;
	base_len = ft_baselen(base);
	if (base_len <= 1)
		return (1);
	while (base[i])
	{	
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
		{
			return (1);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_putnbr(int nb, char *base)
{
	long int	nbr;
	int			base_type;
	int			validate;

	nbr = nb;
	base_type = ft_baselen(base);
	validate = base_validate(base);
	if (validate == 1)
		return (0);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / base_type > 0)
	{
		ft_putnbr(nbr / base_type, base);
	}
	nbr = nbr % base_type;
	ft_putchar(base[nbr]);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr(nbr, base);
}

/* os números de caracteres na variável base, 
determina qual é o tipo de base que estaremos utilizando */