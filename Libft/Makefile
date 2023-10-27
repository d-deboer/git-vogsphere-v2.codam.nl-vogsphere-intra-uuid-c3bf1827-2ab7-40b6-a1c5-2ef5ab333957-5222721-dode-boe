# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dode-boe <dode-boe@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/09 17:18:16 by dode-boe      #+#    #+#                  #
#    Updated: 2023/10/27 12:19:48 by dode-boe      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =	ft_toupper.c ft_tolower.c ft_substr.c ft_strtrim.c \
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strmapi.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c \
		ft_striteri.c ft_strdup.c ft_strchr.c ft_split.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_putchar_fd.c ft_memset.c ft_memmove.c ft_memcpy.c \
		ft_memcmp.c ft_itoa.c ft_isprint.c ft_isdigit.c \
		ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c \
		ft_bzero.c ft_atoi.c 

OBJ = 	ft_toupper.o ft_tolower.o ft_substr.o ft_strtrim.o \
		ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_strmapi.o \
		ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strjoin.o \
		ft_striteri.o ft_strdup.o ft_strchr.o ft_split.o \
		ft_putstr_fd.o ft_putnbr_fd.o ft_putendl_fd.o \
		ft_putchar_fd.o ft_memset.o ft_memmove.o ft_memcpy.o \
		ft_memcmp.o ft_itoa.o ft_isprint.o ft_isdigit.o \
		ft_isascii.o ft_isalpha.o ft_isalnum.o ft_calloc.o \
		ft_bzero.o ft_atoi.o

HEAD = libft.h

all : $(NAME)

$(NAME) : $(OBJ) 
	ar r $(NAME) $(HEAD) $(OBJ)	

$(OBJ) : $(FILES) libft.h
	cc -c -Wall -Wextra -Werror $(FILES)

.PHONY: clean
clean : 
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME)

.PHONY: re
re : fclean all
	
