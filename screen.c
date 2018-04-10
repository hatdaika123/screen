#include "screen.h"
#include <stdio.h>

/*
     function definition of clearScreen()
     This function uses VT100 escape sequences \ESC(2J to make the whole
     terminal screen empty
     argument: no
     return: no
*/
//function definition of clearScreen()
void clearScreen(void)
{
	printf("%c[2J", ESC);
	fflush(stdout);
}

/*
     function definition of gotoxy()
     This function uses VT100 escape sequences \ESC[row;colH to set cursor
     to a specific location on the terminal screen
     argument: row number, 1 is top row
               column number, 1 is left column
     return: no           
*/
//function definition of gotoxy()
void gotoxy(int row, int col)
{
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}
// funtion definition of setColor()
void setColor(int color)
{
	if (color>=BLACK && color<= WHITE)
	{
		printf("%c[1;%dm", ESC, color);
		fflush(stdout);
        }
}

/*   funtion definition of disBar(), 
     This funtion display a vertical 
     bar for the given dBalue , the value varies between 30 and 90, 
     so we need to render 3dB for one row and 90dB will be displayed as bar 
     of 30 rows
*/
void dispBar(int col, double dB)
{
	int i;      // loop counter
	for(i=0; i < dB/3; i++)
	{
		gotoxy(30-i, col+1);
#ifndef UNICODE    // if unicode is not enabled
	printf("%c", '*');
#else 
	printf("%s", BAR);
#endif
	}// end of for// constant definitions
}
