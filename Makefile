make:
	g++ -c src\main.cpp
	g++ -o bin\debug\antimony main.o
	del /f main.o
