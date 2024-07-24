/*
 * @Author: dulred dulred@qq.com
 * @Date: 2024-07-20 13:06:06
 * @LastEditors: dulred dulred@qq.com
 * @LastEditTime: 2024-07-20 14:05:22
 * @FilePath: \VSCSDL\test3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window=SDL_CreateWindow("hello SDL", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,720,SDL_WINDOW_SHOWN);
	SDL_Renderer* render = SDL_CreateRenderer(window,-1,0);

	bool isquit =false;
	SDL_Event event;

	while(!isquit){
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				isquit = true;
			}
			SDL_SetRenderDrawColor(render,0,0,0,255);
			SDL_RenderClear(render);

			SDL_SetRenderDrawColor(render,255,255,0,255);
			SDL_RenderDrawPoint(render,100,100);

			SDL_RenderPresent(render);
		}
	}
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}