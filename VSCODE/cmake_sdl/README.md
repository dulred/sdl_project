<!-- 在根目录执行，会自动生成build 目录 -->

cmake -S . -B build -G "Unix Makefiles"

cmake --build build


<!-- 然后直接运行会失败，要把SDL2.dll 放到build目录下才可以直接运行main.exe -->

<!-- 因为SDL2 配置了-mwindows   所以std::cout 不会输出  除非改成-mconsole -->