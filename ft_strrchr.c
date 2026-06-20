/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 22:56:11 by ldubok            #+#    #+#             */
/*   Updated: 2026/06/20 23:09:36 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	character;

	ptr = s;
	character = c;
	while (*ptr)
		ptr++;
	if (!character)
	{
		return (ptr);
	}
	while (ptr >= s)
	{
		if (*ptr == character)
			return (ptr);
		ptr--;
	}
	return (NULL);	
}
