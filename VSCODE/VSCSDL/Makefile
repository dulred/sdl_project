BINS:main.exe game.exe my_test.exe

all:${BINS}

main.exe: test_game.cpp
	g++ $^ -ID:/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/include/SDL2 \
	-LD:/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/lib \
	-lmingw32 -lSDL2main -lSDL2  -o $@ -std=c++17 -mwindows
game.exe: test1.cpp
	g++ $^ -ID:/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/include/SDL2 \
	-LD:/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/lib \
	-lmingw32 -lSDL2main -lSDL2  -o $@ -std=c++17 -mconsole

my_test.exe: my_test.cpp 
	g++ $^ -o $@ -std=c++17 -mconsole

.PHONY: clean

clear:
	rm ${BINS}
run:
	./my_test.exe