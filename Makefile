all:
	mkdir -p build && g++ -std=c++11 src/main.cpp -lglfw -lGL -lX11 -lGLEW -o build/Universe\ Toolbox
run:
	./build/Universe\ Toolbox
