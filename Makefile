CC = gcc

INC = 
LIBS = 
CFLAGS = 

#OBJS = dsmcc-biop-ior.o dsmcc-biop-message.o dsmcc-biop-module.o dsmcc-biop-tap.o \
	dsmcc.o dsmcc-cache-file.o dsmcc-cache-module.o dsmcc-carousel.o dsmcc-compress.o \
	dsmcc-debug.o dsmcc-descriptor.o dsmcc-gii.o dsmcc-section.o dsmcc-ts.o dsmcc-util.o

SRCS = src/dsmcc-biop-ior.c src/dsmcc-biop-message.c src/dsmcc-biop-module.c src/dsmcc-biop-tap.c \
	src/dsmcc.c src/dsmcc-cache-file.c src/dsmcc-cache-module.c src/dsmcc-carousel.c src/dsmcc-compress.c \
	src/dsmcc-debug.c src/dsmcc-descriptor.c src/dsmcc-gii.c src/dsmcc-section.c src/dsmcc-ts.c src/dsmcc-util.c \
	tools/dsmcc-reader.c

TARGET = dsmcc

all : $(TARGET)

$(TARGET) : 
	$(CC) -o $(TARGET) $(SRCS) -Iinclude -Isrc  -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -lglib-2.0 -lpthread -lz

clean : 
	rm -rf $(OBJS) $(TARGET)
