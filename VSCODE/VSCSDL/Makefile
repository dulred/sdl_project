BINS:main.exe game.exe al.exe

all:${BINS}

main.exe: test_game.cpp
	g++ $^ -ID:/dulred/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/include/SDL2 \
	-LD:/dulred/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/lib \
	-lmingw32 -lSDL2main -lSDL2  -o ./bin/$@ -std=c++17 -mwindows

al.exe: al.cpp 
	g++ $^ -o ./bin/$@ -std=c++17 -mconsole

game.exe: game.cpp 
	g++ $^ -ID:/dulred/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/include/SDL2 \
	-LD:/dulred/dev/3rdlibs/SDL2-devel-2.0.22-mingw/SDL2-2.0.22/x86_64-w64-mingw32/lib \
	-lmingw32 -lSDL2main -lSDL2  -o ./bin/$@ -std=c++17 -mconsole

.PHONY: clean

clear:
	rm ${BINS}
run:
	./game.exe