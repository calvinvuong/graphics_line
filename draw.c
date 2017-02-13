#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  // set constants
  int A = y1 - y0;
  int B = x0 - x1;
  int x = x0;
  int y = y0;

  if ( A > 0 && B < 0 && ( -1*B > A ) ) { // octant 1
    int d = 2*A + B;
    while ( x <= x1 ) {
      plot(s, c, x, y);
      if ( d > 0 ) { // line above midpoint
	y++;
	d += 2 * B;
      }
      x++;
      d += 2 * A;
    }
  }
  else if ( A > 0 && B < 0 && ( -1*B < A ) ) { // octant 2
    int d = 2*A - B;
    while ( x <= x1 ) {
      plot(s, c, x, y);
      if ( d < 0 ) {
	y--;
	d -= 2 * B;
      }
      x++;
      d += 2 * A;
    }
  }
  else if (
}

/*PSUEDOCODE
x = x0; y = y0
d = 2A + B
while ( x < x1 )
   plot(x,y)
   if ( d > 0 )
      y++
      d += 2B
   x++
   d += 2A
*/

