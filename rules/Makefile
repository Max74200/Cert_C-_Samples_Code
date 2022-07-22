cc=gcc 
FLAG=-W -Wall
SRC=$(shell find . -name '*.cpp')
OBJ=$(SRC:.cpp=.o)

all: $(OBJ)
	

%.o: %.cpp
	$(CC) $(FLAG) -o $@ -c $<

clean:
	rm -f $(OBJ)
