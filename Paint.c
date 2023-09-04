#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<graphics.h>
#include<dos.h>
void drawCircle (int x1,int y1, int radius1)
{
    circle(x1,y1,radius1);
}
void drawLine(int x1, int y1, int x2, int y2)
{	int gd=DETECT,gm;
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
    line(x1,y1,x2,y2);
}
void drawRectangle(int x1, int y1, int x2, int y2) 
{	int gd=DETECT,gm;
	
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
    rectangle(x1,y1,x2,y2);
	
	
}
void main()
{
    int x1=0, y1=0, x2=0, y2=0,x=0, y=0, radius=0, choice=0;
	int color=0; 
	int thickness=1;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,
    "C:\\TURBOC3\\BGI");
	printf("enter the color(R/B/G)");
	scanf("%d",&color);
    while(1)
    {
	printf("1. Circle\n2.line\n3.Rectangle\n4.Exit\nEnter your choice:");
	scanf("%d",&choice);
	if(choice==4){
		break;
	}
	setcolor(color);
	printf("Enter line thickness: ");
	scanf("%d", &thickness);
	


	switch(choice)
	{
	    case 1: printf("Enter the coordinates and radius (x y radius)");
		    scanf("%d %d %d",&x,&y,&radius);
		    drawCircle(x,y,radius);
		    printf("Circle drawn successfully\n");
		    break;
	     case 2:
		 	printf("Enter coordinates:(x1,y1,x2,y2) ");
			 scanf("%d %d %d %d ", &x1, &y1, &x2, &y2);
			drawLine(x1, y1, x2, y2);
			break;
		case 3:
			 printf("Enter coordinates:(x1,y1,x2,y2) ");
			 scanf("%d %d %d %d ", &x1, &y1, &x2, &y2);
			drawRectangle(x1,y1,x2,y2);
			getch();
			// closegraph();
			break;
		case 4: 
			exit(0);
		    
	    default: printf("Invalid Choice!!!");
	}
 	
    
     getch();
}
// printf("Press 0 to continue...");
// 	scanf("%d",&cs);
// 	if(cs==0)
// 	{
// 	    continue;
// 	}
// 	else
// 	{
// 	    printf("Invalid Number");
//  	}
 }
