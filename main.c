# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
# include <err.h>
# include <math.h>
#include "mysdl.h"
#include "interface.h"
#include <string.h>
//#include "segmentation.h"



//# include "image_processing.h"


/* I) Fenètre d'acceuile
 *      -train
 *      -test
 *        >image
 *        >draw
 * 
 * fenetre/ bouton /le draw*/



/*SDL_Surface* load_image(char *path)
{
    SDL_Surface *img;
    img = IMG_Load(path);
    return img;
}*/


int main(int argc, char *argv[])
{

    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init();
    SDL_Surface *img = load_image(argv[1]);
    open_image(img);
    wait_for_keypressed();
    
    SDL_FreeSurface(img);
    
    //fenetre 1
    
    SDL_Surface *ecran=NULL ;
    
   
    
    //initialisation ecran
    ecran = SDL_SetVideoMode ( 500 ,500 ,32 , SDL_HWSURFACE | SDL_DOUBLEBUF );
    
    SDL_FillRect( ecran, NULL,SDL_MapRGB(ecran->format,0,0,0));
    SDL_Flip(ecran);
    
    wait_for_keypressed();
    
    
    
   
    //mise en place des boutons
    
    fenetre_1(ecran);
    
    //SDL_Flip(ecran);
    
    //wait_for_keypressed();
    
 
   // SDL_Flip(ecran);
    
    wait_for_keypressed();
  //  SDL_FreeSurface(draw);
    
    
    //free (txt);

    
    
//  SDL_FreeSurface(titre);
//  TTF_CloseFont(police_T1);
     

   
    //fenetre_test();
    
    
    TTF_Quit();
    
    SDL_Quit();
   //argv[1] = 'a';
    return argc;
    
}



