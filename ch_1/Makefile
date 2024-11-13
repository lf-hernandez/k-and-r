bin/:
	mkdir -p bin

ex_%: ex_%.c | bin/
	# gcc -Wall -o bin/$@ $<
	clang -Wall -o bin/$@ $<

.PHONY: clean
clean:
	rm -rf bin/* 
