bin/arrayslist: bin/ src/array_list.c src/main.c include/array_list.h
	gcc src/main.c src/array_list.c -o bin/arraylist -L/include

bin/:
	mkdir bin

run: bin/arraylist
	./bin/arraylist

.PHONY: clean
clean:
	rm -rf bin
