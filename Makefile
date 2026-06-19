# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lizaveta <lizaveta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 21:55:15 by lizaveta          #+#    #+#              #
#    Updated: 2026/05/10 21:55:15 by lizaveta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_isalpha.c

all: 
	$(CC) $(SRC) $(CFLAGS)

clean:
	rm -f .

re: clean all

.PHONY: all clean re