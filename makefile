all:
	mkdir bin/
	cd src/ && make
	cd src/ && mv binmatrix ../bin
	cd src/ && make clean
clean:
	rm -r bin/
