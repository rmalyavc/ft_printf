# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/06 15:45:34 by rmalyavc          #+#    #+#              #
#    Updated: 2018/01/20 20:40:26 by rmalyavc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIST_O = ./libft/ft_atoi.o ./libft/ft_count_strings.o ./libft/ft_fetoa.o ./libft/ft_ftoa.o ./libft/ft_isdigit.o ./libft/ft_itoa.o ./libft/ft_itoa_base.o ./libft/ft_memchr.o ./libft/ft_memmove.o ./libft/ft_memset.o ./libft/ft_putchar_fd.o ./libft/ft_putstr.o ./libft/ft_putstr_fd.o ./libft/ft_str_low.o ./libft/ft_str_search.o ./libft/ft_strchr.o ./libft/ft_strcmp.o ./libft/ft_strdel.o ./libft/ft_strdup.o ./libft/ft_strlen.o ./libft/ft_strncat.o ./libft/ft_strnew.o ./libft/ft_strstr.o ./libft/ft_tolower.o ./libft/ft_unicode.o ./libft/ft_utoa_base.o ./libft/ft_atoi_base.o ./libft/ft_bzero.o ./libft/ft_power.o ./libft/ft_strcat.o ./libft/ft_strclr.o ./libft/ft_strcpy.o ./libft/ft_strncmp.o ./libft/ft_strchr_n.o ./libft/ft_toupper.o

all: $(NAME)

$(NAME):
		make re -C libft
		gcc -Wall -Werror -Wextra -c conversions.c put_arg.c push_data.c make_list.c ft_printf.c -I ./bin/ -I ./libft/
		ar rc $(NAME) conversions.o push_data.o put_arg.o make_list.o ft_printf.o $(LIST_O)

clean:
		make clean -C libft
		/bin/rm -f conversions.o put_arg.o push_data.o make_list.o ft_printf.o

fclean: clean
		make fclean -C libft
		/bin/rm -f $(NAME)
		
re: fclean all
