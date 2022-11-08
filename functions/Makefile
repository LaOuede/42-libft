# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:57:00 by gle-roux          #+#    #+#              #
#    Updated: 2022/11/08 11:00:01 by gle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags (CC is used to specify the compiler ; CFLAGS -- Extra \
flags to give to the C compiler ; RM -- Suppress files and directories (-f for \
force and -r flag recursively removes files and directories)
CC		=	gcc
CFLAGS	= 	-Wall -Wextra -Werror -I.
RM		=	rm -rf

# Dir and file names
NAME		=	libft.a
SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
				ft_substr.c ft_tolower.c ft_toupper.c
SRCS_BONUS	= 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
				ft_lstnew.c ft_lstsize.c
OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

# Colors settings
WHITE		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
PINK		:= \033[1;35m
CYAN		:= \033[1;36m

all: $(NAME)

# Compile library (ar -- create and maintain library archives ; r -- replace \
the old files within the library with your new files ; c -- create the library \
if it did not exist ; s -- 'sort' (create a sorted index of) the library \
$@ -- name of the target ; $^ -- list of dependancies))
$(NAME): $(OBJS)
	@echo "$(YELLOW)Creating Libft$(WHITE)"
	@ar rcs $@ $^
	@echo "$(GREEN)Libft is done ◡̈ $(WHITE)"
	
# Create all files .o (object) from files .c (source code) (-c -- Command ; \
$< -- name of the first dependancy ; -o -- Output)
.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Create Bonus files .o
bonus : $(OBJS_BONUS)
	@ar rcs $(NAME) $^
	@echo "$(GREEN)Libft with bonus is done ◡̈ $(WHITE)" 

# Removes objects
clean:
	@echo "$(YELLOW)Removing objects$(WHITE)"
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "$(BLUE)All $(NAME) objects deleted ✓$(WHITE)"

# Removes all objects and executables
fclean: clean
	@echo "$(YELLOW)Removing $(NAME)$(WHITE)"
	@$(RM) $(NAME)
	@echo "$(BLUE)$(NAME) successfully deleted ✓ $(WHITE)"

#exe: $(NAME)
#    valgrind --leak-check=full --show-leak-kinds=all ./a.out

# Removes objects and executables and remakes
re: fclean all
