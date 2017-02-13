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
  
  int i;
  
  //  for ( i = 0; i < 350; i += 5 )
  //  draw_line(50, 0, 400, i, s, c);

  draw_line(50, 25, 300, 10, s, c);
  //draw_line(50, 0, 400, 200, s, c);
  //save_ppm( s, "image.ppm");

  display(s);
  save_extension(s, "lines.png");
}  
