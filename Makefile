make:
	g++ -c src\main.cpp
	g++ -o bin\debug\main main.o
	del /f main.o
	.\bin\debug\main