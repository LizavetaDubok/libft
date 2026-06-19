/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:59:42 by ldubok            #+#    #+#             */
/*   Updated: 2026/06/19 12:07:00 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void*  memset(void *b, int c, size_t len)
{
    unsigned char*  pointer;
    unsigned char   character;
    int             i;

    pointer = (unsigned char*) b;
    character = c;
    i = 0;
    while (i < len)
    {
        *pointer = character;
        ++pointer;
        ++i;
    }
    return (b);
}
