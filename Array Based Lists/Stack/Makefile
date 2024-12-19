bin/stack: bin/ src/stack.c src/main.c include/stack.h
	gcc src/main.c src/stack.c -o bin/stack -L/include

bin/:
	mkdir bin

run: bin/stack
	./bin/stack

.PHONY: clean
clean:
	rm -rf bin
