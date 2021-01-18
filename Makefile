# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kblaze <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 13:17:55 by kblaze            #+#    #+#              #
#    Updated: 2021/01/09 13:23:49 by kblaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c\
		functions_for_d_and_i.c\
		counters.c\
		functions_for_d_and_i2.c\
		functions_for_p.c\
		functions_for_p2.c\
		functions_for_s.c\
		functions_for_u.c\
		functions_for_x.c\
		functions_for_xx.c\
		libft_functions.c\
		parsing_params_function.c\
		skip_write.c\
		type_data.c\
		type_data2.c

OBJ = ${SRCS:.c=.o}

NAME = libftprintf.a

FLAGS = #-Wall -Wextra -Werror

HEADER = header.h

all: ${NAME}

%.o: %.c $(HEADER)
	@gcc $(FLAGS) -c $< -o $@

${NAME}:${OBJ}
	@ar rc ${NAME} ${OBJ}
	@ranlib ${NAME}

clean:
	@rm -f ${OBJ}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re