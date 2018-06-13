CC=g++
CC_FLAGS= -W -Wall -Werror -I./
EXEC=my_http
OBJS=main.o server.o

$(EXEC): $(OBJS)
	$(CC) $(CC_FLAGS) $(OBJS) -g -o $@ 

main.o: httpmain.cpp
	$(CC) $(CC_FLAGS) -g -c -o $@ httpmain.cpp 

server.o: hserver.cpp hserver.hpp
	$(CC) $(CC_FLAGS) -g -c -o $@ hserver.cpp 

all: $(EXEC)

clean:
	rm -rf $(OBJS) $(EXEC) 




