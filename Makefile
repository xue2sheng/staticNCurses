
.PHONY: all cpp clean

all: rust

rust: cpp
	cd rust && cargo build --release --verbose
	otool -L rust/target/release/staticNCurses

cpp: cpp/build/libSillyLib.a

cpp/build/libSillyLib.a:
	mkdir -p cpp/build
	cd cpp/build && cmake ..
	cd cpp/build && make

clean:
	$(RM) -r cpp/build rust/target