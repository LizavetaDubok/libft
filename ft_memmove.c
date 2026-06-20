/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:01:18 by ldubok            #+#    #+#             */
/*   Updated: 2026/06/20 23:09:13 by ldubok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void*   ft_memmove(void *dst, const void *src, size_t len)
{
    const char* src_ptr;
    char *      dest_ptr;
    int         i;

    src_ptr = (const char*) src;
    dest_ptr = (char*) dst;
    if (dest_ptr < src_ptr && dest_ptr + len > src_ptr)
    {
        i = len - 1;
        while (i >= 0)
        {
            *(dest_ptr + i) = *(src_ptr + i);
            --i;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            *(dest_ptr + i) = *(src_ptr + i);
            ++i;
        }
    }
    return (dst);
}
