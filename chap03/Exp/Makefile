main : main.o Exp.o
	g++ main.o Exp.o -o main
main.o : main.cpp
	g++ -c main.cpp -o main.o
Exp.o : Exp.cpp
	g++ -c Exp.cpp -o Exp.o
clean:
	rm -rf *.o