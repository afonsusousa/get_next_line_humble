/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagno-r <amagno-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:28:33 by amagno-r          #+#    #+#             */
/*   Updated: 2025/05/06 23:01:09 by amagno-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_newlen(const char *str)
{
    char	*start;

	start = (char *)str;
	if(!str)
		return (0);
	while (*str && *str != '\n')
		str++;
	return (str - start + (*str == '\n'));
}

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
	return (s);
}

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total;
	void	*ret;

	if (!n || !size)
		return (malloc(0));
	total = n * size;
	ret = malloc(total);
	if (!ret)
		return (NULL);
	return (ft_bzero(ret, total));
}
