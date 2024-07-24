/*
 * @Author: dulred dulred@qq.com
 * @Date: 2024-07-19 20:05:42
 * @LastEditors: dulred dulred@qq.com
 * @LastEditTime: 2024-07-21 12:51:20
 * @FilePath: \VSCSDL\test1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window=SDL_CreateWindow("hello SDL", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,720,SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,0);

	SDL_Surface* surface = SDL_LoadBMP("resources/player.bmp");
	SDL_Texture * textfure = SDL_CreateTextureFromSurface(renderer,surface);
	
	int w = surface->w;
	int h = surface->h;

	bool isquit =false;
	SDL_Event event;

	float  degree = 0;
	while(!isquit){
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				isquit = true;
			} 
		}

		SDL_SetRenderDrawColor(renderer,0,255,0,255);
		SDL_RenderClear(renderer);

		degree +=1;
		SDL_Rect dstrect;
		dstrect.x = 100;
		dstrect.y = 100;
		dstrect.w = w * 3;
		dstrect.h = h * 3;
 		// 更新事件状态
        SDL_PumpEvents();

		const Uint8* keys = SDL_GetKeyboardState(NULL);
		if (keys[SDL_SCANCODE_R])
		{
			SDL_Log("are you ok ?");
		}
		


		SDL_RenderCopyEx(renderer,textfure,NULL,&dstrect,degree,NULL,SDL_FLIP_NONE);

		SDL_RenderPresent(renderer);
		// 延迟以控制帧率
        SDL_Delay(16); // 约 60 帧每秒
	}
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}