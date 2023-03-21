/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:35:12 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/18 12:07:13 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalized;

	i = 0;
	capitalized = 1;
	while (str[i] != '\0')
	{
		if (capitalized == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i]) - 32;
			capitalized = 0;
		}
		else if (capitalized == 1 && str[i - 1] >= '0' && str[i - 1] <= '9')
			capitalized = 0;
		else if (capitalized == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i]) + 32;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			capitalized = 1;
		i++;
	}
	return (str);
}
