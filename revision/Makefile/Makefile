cc=gcc
#dir1=./d1
#dir2=./d2

all:cal
	
cal:main.o file1.o file2.o	
	$(cc) main.o ./d1/file1.o ./d2/file2.o -o main
main.o: main.c
	$(cc) -c  main.c 
file1.o:
	$(MAKE) -C ./d1/
file2.o:
	$(MAKE) -C ./d2/
clean:
	rm *.o
install:
	sudo cp main /bin/

	
