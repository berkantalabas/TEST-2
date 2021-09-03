#include <stdio.h>

typedef struct
{
	int a;
	int b;
	
}Point;

int main()
{
    Point point;
	point.a = 10;
	point.b= 20; 
	printf("%d\n",point.a);
	printf("%d",point.b);
	
	
	return 0;
}
