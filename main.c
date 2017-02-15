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

  
  display(s);
  save_extension(s, "lines.png");
}  
