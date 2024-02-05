## Digital Differential Analyzer(DDA)
$\textrm{\large About DDA }$ [Youtube Video](https://www.youtube.com/watch?v=N7HtCUSWKXc)
```c++
#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

class dda
{
	private:
		float x1,x2,y1,y2,dx,dy,xi,yi,xn,yn,length;
	public:
		void initialValues(float a,float b,float c,float d)
		{
			x1=a,y1=b,x2=c,y2=d;
			dx=x2-x1;
			dy=y2-y1;
			if(abs(dx)>=abs(dy)) 
				length=abs(dx);
			else
				length=abs(dy);
			xi=dx/length;
			yi=dy/length;
			xn=x1;
			yn=y1;
		}
		void drawLine()
		{
			for(int i=1; i<=length; i++)
			{
				putpixel(floor(xn),floor(yn),CYAN);
				xn = xn+xi;
				yn = yn+yi;
				delay(100);
			}
		}
};

int main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2;
	cout<<"Enter the x coordinate : ";
	cin>>x1;
	cout<<"Enter the y coordinate : ";
	cin>>y1;
	cout<<"Enter the x coordinate : ";
	cin>>x2;
	cout<<"Enter the y coordinate : ";
	cin>>y2;

	dda line1;
	initgraph(&gd,&gm,NULL);
	line1.initialValues(x1,y1,x2,y2);
	line1.drawLine();

	getch();
	closegraph();
	return 0;
}
```
