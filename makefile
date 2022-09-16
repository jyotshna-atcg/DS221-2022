all: Tree
	g++ --std=c++11 -o Tree Tree.cpp

clean:
	rm -f Tree