CC = gcc
CFLAGS = -Wall -Wextra -Wdouble-promotion -Wformat -Wformat-security \
		 -Wmissing-include-dirs -Wuninitialized

tracker: main.o
	@${CC} -o tracker main.o
	@echo "Ready to execute."

main.o: main.c
	@${CC} ${CFLAGS} -c main.c

.PHONY: clean
clean:
	@rm -f tracker main.o
	@echo "Clean complete."