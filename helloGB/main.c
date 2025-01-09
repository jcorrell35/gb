#include <gb/gb.h>

typedef unsigned char u8;

const u8 const myTileData[]=
{
    0,60,0,126,0,219,0,231,0,126,0,60
};

void main(void)
{
    set_bkg_2bpp_data(1,1,myTileData);
    DISPLAY_ON;
    SHOW_BKG;

    u8 x;
    for(x=0;x<20;++x){
        set_tile_xy(x,0,1);
        set_tile_xy(x,17,1);
    }

    while(1)
    {
        wait_vbl_done();
    }
}
