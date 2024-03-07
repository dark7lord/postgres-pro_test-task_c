CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC_DIR = src

.PHONY: all clean check archive

all: quadratic_equation_test tests

quadratic_equation_test: $(SRC_DIR)/main.c $(SRC_DIR)/quadratic_equation.c
	$(CC) $(CFLAGS) -I$ (SRC_DIR) -o $@ $^

tests: tests.c $(SRC_DIR)/quadratic_equation.c
	$(CC) $(CFLAGS) -I $(SRC_DIR) -o $@ $^

check: quadratic_equation_test tests
	./quadratic_equation_test
	./tests

archive:
	tar -czvf quadratic_equation.tar.gz $(SRC_DIR)

clean:
	rm -f quadratic_equation_test tests quadratic_equation.tar.gz
