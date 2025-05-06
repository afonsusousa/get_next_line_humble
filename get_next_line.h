/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagno-r <amagno-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:45:13 by amagno-r          #+#    #+#             */
/*   Updated: 2025/05/06 23:14:08 by amagno-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_get_line(int fd, char *buffer);
char	*ft_strjoin_gnl(char *stash, char *buffer);
void	ft_update_buffer(char *buffer, int *newline);

size_t	ft_newlen(const char *str);
void	*ft_calloc(size_t n, size_t size);
void	*ft_bzero(void *s, size_t n);

#endif
