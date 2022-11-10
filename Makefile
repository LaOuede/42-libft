# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:57:00 by gle-roux          #+#    #+#              #
#    Updated: 2022/11/10 14:29:45 by gle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
CFLAGS	= 	-Wall -Wextra -Werror

# Remove and Archives
RM		=	rm -rf
ARCH	=	ar rcs	

# Dir and file names
NAME		=	libft.a
SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c
SRCS_BONUS	= 	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
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

# Creation of the executable
all: $(NAME)

# Compile library
$(NAME): $(OBJS)
	@$(ARCH) $(NAME) $(OBJS)
	@echo "$(GREEN)Libft is done ◡̈ $(WHITE)"
	
# Create all files .o (object) from files .c (source code)
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

# Creates Bonus files .o
bonus : $(OBJS_BONUS)
	@$(ARCH) $(NAME) $(OBJS_BONUS)
	@echo "$(GREEN)Libft with bonus is done ◡̈ $(WHITE)" 

# Removes objects
clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "$(YELLOW)All $(NAME) objects deleted ✓$(WHITE)"

# Removes all objects and executables
fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)All $(NAME) exec. and archives successfully deleted ✓ $(WHITE)"

# Removes objects and executables and remake
re: fclean all

# Avoids file-target name conflicts
.PHONY: all bonus clean fclean re