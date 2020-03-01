CC = gcc
CFLAGS = -Wall -Wextra -Wdouble-promotion -Wformat -Wformat-security \
		 -Wmissing-include-dirs -Wuninitialized
OBJ = main.o tracker.o

.PHONY: tracker update generate clean

tracker: ${OBJ}
	@${CC} -o tracker ${OBJ}
	@echo "Ready to execute tracker."

main.o: main.c tracker.h
	@${CC} ${CFLAGS} -c main.c

tracker.o: tracker.c tracker.h
	@${CC} ${CFLAGS} -c tracker.c

update:
	@echo "Checking for changes to Catan-tracker..."
	@git pull
	@echo "Checking for changes to doxygen..."
	@cd doxygen; \
	git pull
	@cd documentation; \
	cmake -G "Unix Makefiles" ../doxygen; \
	make; \
	make install; \
	doxygen -u Doxyfile
	@echo "Done."

generate:
	@echo "Generating documentation website..."
	@rm -r docs
	@cd documentation; \
	doxygen Doxyfile; \
	mv html docs; \
	mv docs ..
	@echo "Available at 'docs/index.html'."
	@open "docs/index.html"

clean:
	@rm -f tracker ${OBJ}
	@echo "Clean complete."