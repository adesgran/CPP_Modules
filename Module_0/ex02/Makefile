NAME = test

CC = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = tests.cpp Account.cpp
O_FILES = $(C_FILES:.cpp=.o)

INCLUDES = -I .

%.o: %.cpp
	@printf "\033[0;33mGenerating ${NAME} objects... %-33.33s\r\033[0m" $@
	@${CC} ${C_FLAGS} ${INCLUDES} -c $< -o $@

all: ${NAME}

${NAME}: ${O_FILES}
	@echo "\n\n\033[0;34mCompiling ${NAME}...\033[0m\n"
	@${CC} ${O_FILES} -o ${NAME}

clean:
	@echo "\n\033[0;31mRemoving objects files...\033[0m"
	@rm -f ${O_FILES}

fclean: clean
	@echo "\n\033[0;31mRemoving ${NAME} executable...\033[0m\n"
	@rm -f ${NAME}

compare:
	cat 19920104_091532.log | cut -f 2 -d " " > s1
	./test | cut -f 2 -d " " > s2
	diff s1 s2
	rm s1 s2

re: fclean all
