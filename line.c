#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

void drawLine(int x, int y, int x3, int y3)
{
    line(x, y, x3, y3);  
    getch();             
}

void main()
{
    int color = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Enter the color (R/B/G): ");
    scanf("%d", &color);
    setcolor(color);  
	printf("Enter coordinates (x1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	drawLine(x1, y1, x2, y2);  
	printf("Line drawn successfully\n");
}
