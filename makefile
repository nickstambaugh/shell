CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: shell

shell: src/main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f shell