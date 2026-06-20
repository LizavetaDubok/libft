/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 22:51:08 by ldubok            #+#    #+#             */
/*   Updated: 2026/06/20 23:09:39 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strchr(const char *s, int c)
{
	char	*ptr;
	char	character;

	ptr = s;
	character = c;
	while (*ptr)
	{
		if (*ptr == character)
			return (ptr);
		ptr++;
	}
	if (!character)
	{
		return (ptr);
	}
	return (NULL);
}
