CC      := gcc
CFLAGS  := -std=c11 -Wall -Wextra -Werror -ggdb
LDLIBS  := -lcs50

# Default rule: build target from .c file of same name
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

.PHONY: clean
clean:
	rm -f *.o a.out *.out
