# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include <err.h>
# include <math.h>
#include "mysdl.h"
#include "interface.h"



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
    
    SDL_Surface *img = load_image(argv[1]);
    open_image(img);
    wait_for_keypressed();
    
    SDL_FreeSurface(img);
    
    //fenetre 1
    
    SDL_Surface *ecran=NULL ;
    
   
    
    //initialisation ecran
    ecran = SDL_SetVideoMode ( 500 ,500 ,32 , SDL_HWSURFACE | SDL_DOUBLEBUF );
    SDL_WM_SetCaption("Reconnaissance de nombres",NULL);
    SDL_FillRect( ecran, NULL,SDL_MapRGB(ecran->format,17,206,112));
    SDL_Flip(ecran);
    
    //mise en place des boutons
    
    fenetre_1(ecran);
    
   
    //fenetre_test();
    
    
    SDL_Quit();
    //*argv[1] = 'a';
    return argc;
    
}
