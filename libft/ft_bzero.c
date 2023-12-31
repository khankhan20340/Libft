/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:46:34 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:42:42 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	l;

	str = (char *)s;
	l = 0;
	while (l < n)
	{
		str[l] = '\0';
		l++;
	}
}
