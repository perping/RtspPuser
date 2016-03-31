SHELL = /bin/sh  
CC = gcc  
AR = ar rc 

CFLAG = -O2 -W  -I.# -Wall

#FILE_C +=$(wildcard *.c)
FILE_C =rtsppusher.c rtmppusher.c hlspusher.c
FILE_O =$(patsubst %.c,%.o,$(FILE_C))
FILE_D =$(patsubst %.c,%.d,$(FILE_C))

TARGET_LIB =libpusher.a  
TARGET_BIN =pusher
TARGET_O =pusher.o

all : $(TARGET_LIB) $(TARGET_BIN) 
%.o:  %.c
	$(CC) $(CFLAG) -c $< -o $@ 
$(TARGET_O):pusher.c
	$(CC) $(CFLAG) -c pusher.c -o $(TARGET_O)
$(TARGET_LIB) : $(FILE_O)  
	$(AR) $(TARGET_LIB) $(FILE_O)

$(TARGET_BIN) : $(TARGET_O)
	$(CC) -o $(TARGET_BIN) $(TARGET_O) $(TARGET_LIB)

clean:  
	rm -f *.o $(TARGET_LIB) $(TARGET_BIN)
