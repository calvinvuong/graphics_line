#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  c.red = 173;
  c.green = 58;
  c.blue = 234;
  
  clear_screen(s);

  int x0, x1, y0, y1;
  int x_increment = XRES/5;
  int y_increment = YRES/5;

  for ( x0 = 50; x0 < XRES; x0 += x_increment ) {
    for ( y0 = 50; y0 < YRES; y0 += y_increment) {
      for ( x1 = 50; x1 < XRES; x1 += x_increment ) {
	for ( y1 = 50; y1 < YRES; y1 += y_increment) {
	  draw_line(x0, y0, x1, y1, s, c);
	}
      }
    }
  }
    
  display(s);
  save_extension(s, "lines.png");
}  
