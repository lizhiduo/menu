CC=gcc
CFLAGS=

TAGET=test

SRCS=main.c menu.c

OBJS=$(SRCS:.c=.o)

$(TAGET) : $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -rf $(TAGET) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

