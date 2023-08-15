NAME = GNL
CFLAGS = -Wall -Werror -Wextra -D BUFFER_SIZE=1 -g -fsanitize=address
OBJECTS = get_next_line.c get_next_line_utils.c main.c

${NAME}: ${OBJECTS}
	cc ${CFLAGS} ${OBJECTS} -o ${NAME}
all: ${NAME}

fclean: clean
	rm -rf ${NAME}

clean:
	rm -f ${NAME}
	
re: fclean all

.PHONY: clean all fclean re main