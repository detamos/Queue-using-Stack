
CC = gcc
CFLAGS = -std=gnu99 -Wall -Wextra -g 

RM = rm
RMFLAGS = -f

SRCS = src/main.c src/queue_using_stack.c include/stack.c

INCLUDES = include/stack.h

LIBS = -lm

OBJS = $(SRCS:.c = .o)

all: QueueWithStack

clean:
		$(RM) $(RMFLAGS) ./bin/*

QueueWithStack: $(OBJS)
		$(CC) $(CFLAGS) $(INCLUDES) -o ./bin/QueueWithStack $(OBJS) $(LIBS)