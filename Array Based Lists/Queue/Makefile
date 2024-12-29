bin/queue: bin/ src/queue.c src/main.c include/queue.h
	gcc src/main.c src/queue.c -o bin/queue -L/include

bin/:
	mkdir bin

run: bin/queue
	./bin/queue

.PHONY: clean
clean:
	rm -rf bin
