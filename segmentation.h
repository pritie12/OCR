#ifndef SEGMENTATION_H
# define SEGMENTATION_H

void horizontal(SDL_Surface *img);
void vertical(SDL_Surface *img, int starter , int ending);
void separate(SDL_Surface *img);
void blacknwhite(SDL_Surface *img);
void resize (SDL_Surface *scr ,int **src_bin, int (*dest)[28]);
void binarised(SDL_Surface *img);


#endif /* !SEGMENTATION_H */
