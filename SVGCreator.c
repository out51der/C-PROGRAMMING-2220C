// Draw SVG primitives

// Based on: https://www.w3schools.com/graphics/svg_inhtml.asp
// example:
/*
 <svg height="100" width="100">
  <circle cx="50" cy="50" r="40" stroke="black" stroke-width="3" fill="red" />
</svg> */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// User defined functions are in Chapter 6 of your zyBook
void circle ( int cx, int cy, int r, char* color )
{
    printf ( "\t<circle cx='%d' cy='%d' r='%d' fill='%s' />\n", cx, cy, r, color) ;
}

/*
 <svg height="210" width="500">
  <line x1="0" y1="0" x2="200" y2="200" style="stroke:rgb(255,0,0);stroke-width:2" />
</svg>
*/
void line ( float x1, float y1, float x2, float y2, char* stroke )
{
    printf ( "<line x1='%f' y1='%f' x2='%f' y2='%f' style='%s' />\n",
        x1, y1, x2, y2, stroke ) ;
}

// example from: https://www.w3schools.com/graphics/svg_rect.asp
//
// <rect width="300" height="100" style="fill:rgb(0,0,255);stroke-width:3;stroke:rgb(0,0,0)" />
void rect ( int x, int y, int width, int height, char* color )
{
    printf ( "<rect x=%d y=%d width='%d' height='%d' style = 'fill:%s;stroke-width:3;stroke:rgb(0,0,0)'/>\n",
        x, y, width, height, color ) ;
}

void beginHtmlSVG ( int wide, int high, char* backColor)
{
    printf ( "<!DOCTYPE html>\n" ) ;
    printf ( "<html>\n" ) ;
    printf ( "<body>\n" ) ;

    printf( "<svg height='%d' width='%d' style='stroke-width: 0px; background-color: %s;'>\n",
        high, wide, backColor ) ;
}

void endHtmlSVG ( )
{
    printf( "</svg>\n") ;
    printf ( "</body>\n" ) ;
    printf ( "</html>\n" ) ;
}

char* getRGBColor ( int red, int green, int blue )
{
    static char* svgFillString = "rgb(%d, %d, %d)" ;
    static char result[100] = { 0 } ;
    sprintf( result, svgFillString, red, green, blue ) ;
    return result ;
}

int main ( )
{
    srand( time ( NULL ) ) ;
    // wide, high, background color
    beginHtmlSVG ( 1000, 1000, getRGBColor( 128, 0, 128 ) ) ;

    // Sample code.  Add loops and other enhancements here to get
    // more and cooler output.
    int x = ( rand ( ) % 300 ) + 200 ;
    int y = ( rand ( ) % 300  ) + 100 ;
    int size = ( rand ( ) % 150 ) + 10 ;
    int red = rand( ) % 255 ;
    int blue = rand( ) % 255 ;
    int green = rand ( ) % 255 ;
    
    // col, row, how big, color
    circle( x, y, size, getRGBColor( red, green, blue ) ) ;
    
    //example using line ( )
    // from col, from row, to col, to row, color
    //line ( 50.5, 50.75, 75.1, 75.3, "stroke:rgb(0,0,255);stroke-width:2") ;
    
    // You can use a site like this: https://www.w3schools.com/colors/colors_picker.asp
    // to come up with cool color numbers.
    
    // example using rect ( )
    // col, row, wide, high, color
    // rect ( 200, 200, 150, 50, getRGBColor( 244, 66, 143 ) ) ;

    endHtmlSVG ( ) ;

    return 0 ;
}
