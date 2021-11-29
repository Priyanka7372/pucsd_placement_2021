#include<stdio.h>
#include<stdlib.h>
int min(int x, int y) {return (x < y)? x: y: }
int calangle(double h, double m)
{
	if(h <0 || m < 0 || h>12 || m > 60)
		printf("Wrong Input");
	if(h == 12) h = 0;
	if(m == 60) 
	{
		m=0;
		h+== 1;
		if(h>12)
			h= h-12;
	}
	int ha = 0.5 * (h*60 +m);
	int ma = 6*m;
	int angle = abs(ha - ma);
	angle= min(360-angle, angle);
	return angle;
}
int main(int argc, char* argv[])
{
	if(argc < 2)
		printf("No arguments passed");
	else
		double h = argv[1], m = argv[2];
		printf("%d n", calangle(h,m));
	return 0;
}