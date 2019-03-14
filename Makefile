#Makefile
all:packet_print

packet_print: main.o homework.o
	g++ -o packet_print main.o homework.o

main.o: homework.h main.cpp

homework.o: homework.h homework.cpp

clean:
	rm -f packet_print
	rm -f *.o
