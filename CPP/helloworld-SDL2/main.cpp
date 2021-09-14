#include <SDL2/SDL.h>
#include <iostream>


#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main(  ) 
{
  SDL_Window* window = NULL ;
  
  SDL_Surface* screenSurface = NULL ;
  
  if (SDL_Init( SDL_INIT_VIDEO ) < 0 ) 
  {
      std::cout << "could not init SDL \n" ; 
      std::exit( 0 ) ; 
  }
  
  window = SDL_CreateWindow(
			    "hello world" ,
			    SDL_WINDOWPOS_UNDEFINED , 
                SDL_WINDOWPOS_UNDEFINED ,
			    SCREEN_WIDTH, SCREEN_HEIGHT ,
			    SDL_WINDOW_SHOWN
			    ) ;

  if ( window == NULL ) 
  
  {
        std::cout << "could not open window \n" << SDL_GetError(  ) << std::endl ;
        exit( 0 ) ; 
  }

  screenSurface = SDL_GetWindowSurface( window ) ;
  
  SDL_FillRect( screenSurface , 
                NULL , 
                SDL_MapRGB( screenSurface->format , 
                0x0 , 0x0 , 0x0 ) ) ;
  
  SDL_UpdateWindowSurface( window ) ;
  
  SDL_Delay( 4500 ) ;

  SDL_DestroyWindow( window ) ;

  SDL_Quit(  ) ;
}