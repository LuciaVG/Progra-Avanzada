LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c infographic.c
	 gcc -c main.c
	 gcc -o infographic.exe infographic.o main.o $(LIB)

infographictest: clean
	 gcc -c infographic.c
	 gcc -c infographictest.c
	 gcc -o infographictest.exe infographic.o infographictest.o
	 ./infographictest.exe

test:	 infographictest

clean:
	 rm *.out *.o *.exe || exit 0

infographic: clean
	 gcc -c infographic.c
	 gcc -c main.c
	 gcc -o infographic.exe infographic.o main.o $(LIB)

run: infographic
	 ./infographic.exe

runtest: infographic
	 ./maintest.tcl ./infographic.exe

