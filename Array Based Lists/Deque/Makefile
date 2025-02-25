bin/queue: bin/ src/deque.c src/main.c include/deque.h
	gcc src/main.c src/deque.c -o bin/deque -L/include

bin/:
	mkdir bin

run: bin/queue
	./bin/deque

.PHONY: clean
clean:
	rm -rf bin
