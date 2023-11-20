/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:37:04 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/26 17:25:28 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>

int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_substr(char *s, int start, int len);
int		ft_occurance(const char *s, char c);
int		ft_wordlen(const char *s, char c);
void	free_all(char **s);
char	*find_word(const char *s, char c);
char	**ft_split(const char *s, char c);
int		read_or_write(char *s, int rw);
char	*ft_strjoin(char const *s1, char const *s2);
char	**envi(char **env);
char	*find(char **env, char *cmd);
void	execute(char *command, char **env);
void	cprocess(char **argv, int *pfd, char **env);
void	pprocess(char **argv, int *pfd, char **env);

#endif