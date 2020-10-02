
all :
	clang++-9 -std=c++2a converter.cpp 
	./a.out
	rm a.out

	