#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

void drawCircle(int x1, int y1, int radius1)
{
    circle(x1, y1, radius1);
    getch();
}

void drawLine(int x1, int y1, int x2, int y2)
{
    line(x1, y1, x2, y2);
    getch();
}

void drawRectangle(int x, int y, int x3, int y3)
{
    rectangle(x, y, x3, y3);
    getch();
}

void main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x = 0, y = 0, x3 = 0, y3 = 0, radius = 0, choice = 0;
    int color = 0;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
    printf("Enter the color (R/B/G): ");
    scanf("%d", &color);
    setcolor(color); 
    printf("1. Circle\n2. Line\n3. Rectangle\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the coordinates and radius (x y radius): ");
        scanf("%d %d %d", &x, &y, &radius);
        drawCircle(x, y, radius);
        printf("Circle drawn successfully\n");
        break;
    case 2:
        printf("Enter coordinates (x1,y1,x2,y2): ");
        scanf("%d %d %d %d", &x, &y, &x3, &y3);
        drawLine(x, y, x3, y3);
        printf("Line drawn successfully\n");
        break;
    case 3:
        printf("Enter coordinates (x1,y1,x2,y2): ");
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        drawRectangle(x1, y1, x2, y2);
        printf("Rectangle drawn successfully\n");
        break;
    default:
        printf("Invalid Choice!!!");
    }
    getch(); 
}
