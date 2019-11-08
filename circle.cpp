#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
void drawcircle(int coordinatX, int coordinatY, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
	putpixel(coordinatX + x, coordinatY + y, 7);
	putpixel(coordinatX + y, coordinatY + x, 7);
	putpixel(coordinatX - y, coordinatY + x, 7);
	putpixel(coordinatX - x, coordinatY + y, 7);
	putpixel(coordinatX - x, coordinatY - y, 7);
	putpixel(coordinatX - y, coordinatY - x, 7);
	putpixel(coordinatX + y, coordinatY - x, 7);
	putpixel(coordinatX + x, coordinatY - y, 7);

	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}

	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	} 
    }
}

int main()
{
	int gdriver=DETECT, gmode, error, x, y, r;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

	cout<<"Enter co-ordinates of center(x): \n";
	cin>>x;
	cout<<"Enter co-ordinates of center(y): \n";
	cin>>y;
	cout<<"Enter radius of circle:\n";
	cin>>r;
	drawcircle(x, y, r);
    getch();
	return 0;
}
