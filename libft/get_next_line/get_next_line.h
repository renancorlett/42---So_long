/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:54:45 by rcorlett          #+#    #+#             */
/*   Updated: 2025/02/11 16:09:56 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_file(int fd, char *stash);
char	*extract_line(char *stash);
char	*update_stash(char *stash);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	strlen_gnl(const char *str);
char	*ft_strchr_gnl(const char *s, int c);
void	*calloc_gnl(size_t nmemb, size_t size);

#endif
