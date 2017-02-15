#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);

  int i, k;
  int x0 = 0;
  int y0 = 0;
  int x1 = 0;
  int y1 = 0;
  int x_increment = XRES/5;
  int y_increment = YRES/5;

  for ( x0 = 0; (x0) <= XRES; x0 += x_increment ) {
    for ( y0 = 0; ( y0 ) <= YRES; y0 += y_increment) {
      for ( x1 = 0; (x1 ) <= XRES; x1 += x_increment ) {
	for ( y1 = 0; ( y1) <= YRES; y1 += y_increment) {
	  draw_line(x0, y0, x1, y1, s, c);
	}
      }
    }
  }
  draw_line(0, 500, 500, 500, s, c);
  draw_line(500, 500, 500, 0, s, c);
  /*
  draw_line(50, 100, 100, 100, s, c); // horiz

  draw_line(100, 300, 100, 500, s, c); // vert
  
  draw_line(50, 10, 300, 25, s, c); // oct1
  draw_line(50, 25, 300, 10, s, c); // oct8

  draw_line(50, 100, 100, 300, s, c); // oct2
  draw_line(50, 300, 100, 10, s, c); // oct7

  draw_line(300, 10, 250, 150, s, c); // oct3
  draw_line(350, 50, 100, 100, s, c); // oct4

  draw_line(450, 300, 100, 200, s, c); // oct5
  draw_line(400, 400, 300, 50, s, c); // oct6
  */
  
  display(s);
  save_extension(s, "lines.png");
}  
