/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:36:44 by bbaatar           #+#    #+#             */
/*   Updated: 2022/02/16 15:36:46 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

char	*deactive_env(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '$')
			s[i] = 1;
		i++;
	}
	return (s);
}

char	*active_env(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 1)
			s[i] = '$';
		i++;
	}
	return (s);
}
