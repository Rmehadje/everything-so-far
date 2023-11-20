/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:26:03 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/27 12:56:11 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**envi(char	**env)
{
	char	*sub;
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, ft_strlen(env[i]));
		if (!ft_strncmp(sub, "PATH=", 5))
			break ;
		free (sub);
		i++;
	}
	tmp = ft_split(sub + 5, ':');
	return (tmp);
}

char	*find(char **env, char *cmd)
{
	int		i;
	char	*path;
	char	*temp;
	char	**tmp;

	i = 0;
	tmp = envi(env);
	while (tmp[i])
	{
		temp = ft_strjoin(tmp[i], "/");
		path = ft_strjoin(temp, cmd);
		free(temp);
		if (access(path, F_OK | X_OK) == 0)
			break ;
		free(path);
		path = NULL;
		i++;
	}
	return (path);
}

void	execute(char	*command, char	**env)
{
	char	**cmd;
	char	*path;

	cmd = ft_split(command, ' ');
	path = find(env, cmd[0]);
	if (!path)
		exit(1);
	if (execve(path, cmd, env) == -1)
	{
		write(1, "invalid command", 16);
		free_all(cmd);
		exit (1);
	}
}
