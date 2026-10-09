studentData: main.o address.o
	g++ -g main.o address.o

main.o: main.cpp address.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

run: studentData
	./studentData

clean:
	rm studentData
	rm *.o

debug: studentData
	gdb studentData
