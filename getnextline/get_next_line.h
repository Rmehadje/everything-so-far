/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:34:07 by rmehadje          #+#    #+#             */
/*   Updated: 2023/08/19 13:45:06 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include	<unistd.h>
# include	<fcntl.h>
# include	<string.h>
# include	<stdio.h>
# include	<stdlib.h>

char				*get_next_line(int fd);
size_t				ft_strlen(char	*s);
char				*ft_strjoin( char *s1, char *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_substr(char *s, unsigned int start, size_t len);
char				*ft_strdup(char *s);
char				*ft_get_line(int fd, char *stat, char *tmp);

#endif