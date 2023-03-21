/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:17:53 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/19 15:46:17 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[j] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[j];
		i++;
		j++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
