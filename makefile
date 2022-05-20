all:Pricing_plan_Helper test

Pricing_plan_Helper: ./build/src/main.o ./build/src/Menu.o ./build/src/about_operators.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o 
	g++ -std=c++17 ./build/src/main.o ./build/src/Menu.o ./build/src/about_operators.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o -o ./bin/Pricing_plan_Helper


./build/src/main.o: ./src/main.cpp
	g++ -std=c++17 -c ./src/main.cpp -o ./build/src/main.o 

./build/src/Menu.o: ./src/Menu.cpp
	g++ -std=c++17 -c ./src/Menu.cpp -o ./build/src/Menu.o 
./build/src/comparison.o: ./src/comparison.cpp
	g++ -std=c++17 -c ./src/comparison.cpp -o ./build/src/comparison.o 

./build/src/counting_for.o: ./src/counting_for.cpp
	g++ -std=c++17 -c ./src/counting_for.cpp -o ./build/src/counting_for.o 

./build/src/about_operators.o: ./src/about_operators.cpp
	g++ -std=c++17 -c ./src/about_operators.cpp -o ./build/src/about_operators.o 

./build/src/questions.o: ./src/questions.cpp
	g++ -std=c++17 -c ./src/questions.cpp -o ./build/src/questions.o 

clean:
	rm -rf ./build/src/*.o ./build/test/*.o ./bin/*.exe

test:  ./build/src/Menu.o ./build/src/about_operators.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o ./build/test/test.o
	g++ -std=c++17 -o ./bin/test ./build/src/Menu.o ./build/src/about_operators.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o  ./build/test/test.o 
	./bin/test

./build/test/test.o: ./test/test.cpp
	g++ -std=c++17 -c ./test/test.cpp  -o  ./build/test/test.o 
