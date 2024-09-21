
TARGET=abc

CSRC=$(TARGET).c
COBJ=$(CSRC:.c=.o)

CC=gcc
CFLAGS=-Wall
LDFLAGS=-Wall

$(TARGET).out: $(COBJ)
	$(CC) $(LDFLAGS) $(COBJ) -o $(TARGET).out

$(COBJ): $(CSRC)
	$(CC) $(CFLAGS) -c $(CSRC)

run:
	./$(TARGET).out

clean:
	rm $(COBJ) $(TARGET).out

.phony: run clean
