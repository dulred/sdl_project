/*
 * @Author: dulred dulred@qq.com
 * @Date: 2024-07-20 11:02:23
 * @LastEditors: dulred dulred@qq.com
 * @LastEditTime: 2024-07-20 12:52:12
 * @FilePath: \VSCSDL\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		SDL_Log("sdl init failed");
		return 1;
	}
	
	const int WindowWidth = 200;
	const int WindowHeight = 200;
	int x = 0;
	SDL_Window* window=SDL_CreateWindow("shaped", x,SDL_WINDOWPOS_CENTERED,WindowWidth,WindowHeight,SDL_WINDOW_SHOWN);
	SDL_Renderer* render = SDL_CreateRenderer(window,-1,0);

	bool isquit =false;
	SDL_Event event;
	SDL_Rect screenRect;
	SDL_GetDisplayBounds(0,&screenRect);

	SDL_SetWindowBordered(window, SDL_FALSE);
	SDL_Rect rect  =  {100,100,10,10};
	SDL_SetWindowMouseRect(window,&rect);
	SDL_SetWindowAlwaysOnTop(window,SDL_TRUE);
	// SDL_SetWindowMouseGrab(window, SDL_TRUE);

	int direction = 1;
	while(!isquit){
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				isquit = true;
			}
			x += direction *10;
			if (x + WindowWidth >= screenRect.w)
			{
				direction = -1;
			}else if(x < 0){
				direction = 1;
			}
			
			SDL_SetWindowPosition(window,x,SDL_WINDOWPOS_CENTERED);
			SDL_RenderPresent(render);
			SDL_Delay(30);
		}
	}
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}