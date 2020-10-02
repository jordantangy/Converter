
all :
	clang++-9 -std=c++2a Convertor.cpp 
	./a.out

clean:
	rm a.out