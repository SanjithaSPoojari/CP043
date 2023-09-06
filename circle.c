#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<graphics.h>
#include<dos.h>
void drawCircle (int x1,int y1, int radius1)
{
    circle(x1,y1,radius1);
	getch();
	
}

void main()
{ int color=0,x=0, y=0,radius=0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,
    "C:\\TURBOC3\\BGI");
	printf("enter the color(R/B/G)");
	scanf("%d",&color);
    setcolor(color);
     printf("Enter the coordinates and radius (x y radius)");
		    scanf("%d %d %d",&x,&y,&radius);
		    drawCircle(x,y,radius);
		    printf("Circle drawn successfully\n");
		    
}