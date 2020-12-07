#include<iostream>
using namespace std;
int main()
{
	float x1, x2, y1, y2, e;
	printf("enter x1");
	scanf_s("%f", &x1);
	printf("enter x2");
	scanf_s("%f", &x2);
	printf("enter y1");
	scanf_s("%f", &y1);
	printf("enter y2");
	scanf_s("%f", &y2);
	e = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf( "distance between two 2-dimensional coordinates,%f ",  e);
	return(0);
}
