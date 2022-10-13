/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:16:11 by khatlas           #+#    #+#             */
/*   Updated: 2022/08/24 22:30:18 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str, char *sub, size_t n)
{
	while (n)
	{
		if (*str == '\0')
			return (*str - *sub);
		if ((unsigned char) *str != (unsigned char) *sub)
			return ((unsigned char) *str - (unsigned char) *sub);
		str++;
		sub++;
		n--;
	}
	return (0);
}
