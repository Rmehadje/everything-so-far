/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:17:22 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/26 17:34:09 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	cprocess(char **argv, int *pfd, char **env)
{
	int	fd;

	fd = read_or_write(argv[1], 0);
	dup2(fd, 0);
	dup2(pfd[1], 1);
	close(pfd[0]);
	close (fd);
	execute(argv[2], env);
}

void	pprocess(char **argv, int *pfd, char **env)
{
	int	fd;

	fd = read_or_write(argv[4], 1);
	dup2(fd, 1);
	dup2(pfd[0], 0);
	close(pfd[1]);
	close (fd);
	execute(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int	id;
	int	fd[2];

	if (argc != 5)
		exit (0);
	if (pipe(fd) == -1)
		exit (0);
	id = fork();
	if (id == 0)
		cprocess(argv, fd, env);
	pprocess(argv, fd, env);
	return (0);
}
