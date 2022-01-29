##
## EPITECH PROJECT, 2021
## d10
## File description:
## description
##

OBJ = $(SRCS_C:.c=.o)

LIB = -L./lib/my -lmy

SFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

CFLAGS = -W -Werror -Wextra -Wall

SRC		=	sources/

SRC_C	=	my_ls.c 								\
			my_ls2.c 								\
			flags.c 								\
			function_pointers.c						\
			info_file.c								\
			info_file2.c							\
			save_info.c								\
			sortlinked.c							\
			sortlinked2.c							\
			managesort.c							\
			basic_functions/my_putchar.c	    	\
            basic_functions/my_put_nbr.c	    	\
			basic_functions/my_putstr.c 			\
			basic_functions/my_strlen.c				\
			basic_functions/my_getnbr.c				\
			basic_functions/my_strdup.c				\
			basic_functions/my_strcpy.c				\
			basic_functions/my_revstr.c				\
			basic_functions/my_strcat.c				\
			printf/sources/my_printf.c				\
			printf/sources/func_pointer.c			\
			printf/sources/func_c.c					\
			printf/sources/func_cb.c				\
			printf/sources/func_ce.c				\
			printf/sources/func_cg.c				\
			printf/sources/func_cs.c				\
			printf/sources/func_cx.c				\
			printf/sources/func_e.c					\
			printf/sources/func_f.c					\
			printf/sources/func_g.c					\
			printf/sources/func_o.c					\
			printf/sources/func_p.c					\
			printf/sources/func_s.c					\
			printf/sources/func_u.c					\
			printf/sources/func_x.c					\
			printf/sources/func_id.c				\
			printf/sources/func_module.c			\
			printf/sources/func_minous_plus.c		\

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

CFLAGS = -I./include

NAME = 		my_ls

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o  $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
