
.PHONY: all cpp clean

all: cpp

cpp: cpp/build/SillyLib.a

cpp/build/SillyLib.a:
	mkdir -p cpp/build
	cd cpp/build && cmake ..
	cd cpp/build && make

clean:
	$(RM) -r cpp/build