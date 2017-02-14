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

  if ( B < 0 ) { // octants 1,2,7,8
    if ( ( A > 0 ) && ( -1*B > A ) ) { // octant 1
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
    else if ( (A > 0) && ( -1*B < A ) ) { // octant 2
      int d = 2*B + A;
      while ( y <= y1 ) {
	plot(s, c, x, y);
	if ( d < 0 ) {
	  x++;
	  d += 2 * A;
	}
	y++;
	d += 2 * B;
      }
    }
    else if ( (A < 0) && ( B > A ) ) { // octant 7
      int d = A - 2*B;
      while ( y >= y1 ) {
	plot(s, c, x, y);
	if ( d > 0 ) {
	  x++;
	  d += 2*A;
	}
	y--;
	d -= 2*B;
      }
    }
    else if ( (A < 0) && ( B < A ) ) { // octant 8
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
  }
  else // octants 3, 4, 5, 6
    draw_line(x1, y1, x0, y0, s, c);
  /*
  else if ( B > 0 ) { // octants 3, 4, 5, 6
    if ( (A < 0) && ( -1*B > A ) ) { // octant 3
      draw_line(x1, y1, x0, y0, 
  }
  */
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

