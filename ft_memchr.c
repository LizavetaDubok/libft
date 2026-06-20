/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 22:59:30 by ldubok            #+#    #+#             */
/*   Updated: 2026/06/20 23:09:34 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memchr(const void *s, int c, size_t n)
{
	char    		*ptr;
	unsigned char	character;
	int				i;

	ptr = s;
	character = c;
	while (*ptr && i < n)
	{
		if (*ptr == character)
			return (ptr);
		ptr++;
		i++;
	}
	if (!(*ptr) && !character && i < n)
	{
		return (ptr);
	}
	return (NULL);	
}