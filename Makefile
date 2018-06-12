INC = include
SRC = src
OBJ = build
LIB = lib

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I$(INC)
AR = ar

# Linux/Mac
mathbasic.a: $(SRC)/mbasic.cpp $(INC)/mbasic.h
	$(CC) $(CFLAGS) -c $(SRC)/mbasic.cpp -o $(OBJ)/mbasic.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/mbasic.o

mathbasic.so: $(SRC)/mbasic.cpp $(INC)/mbasic.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC)/mbasic.cpp -o $(OBJ)/mbasic.o
	$(CC) -shared -fPIC -o $(LIB)/$@ $(OBJ)/mbasic.o

# Ruindows
mathbasic.lib: $(SRC)/mbasic.cpp $(INC)/mbasic.h
	$(CC) $(CFLAGS) -c $(SRC)/mbasic.cpp -o $(OBJ)/mbasic.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/mbasic.o

mathbasic.dll: $(SRC)/mbasic.cpp $(INC)/mbasic.h
	$(CC) $(CFLAGS) -c $(SRC)/mbasic.cpp -o $(OBJ)/mbasic.o
	$(CC) -shared -o $(LIB)/$@ $(OBJ)/mbasic.o

clean:
	@rm -rf $(OBJ)/*
