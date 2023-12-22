#include <stdio.h>

int main()
{
	float size,area;
	char shape,square = 'S',circle = 'C';
	printf("Shape=");
	scanf("%c",&shape);
	printf("Size=");
	scanf("%f",&size);
	if(shape == square )
	{
		area = size*size;
		printf("Area of Square = %f",area);
	}
	else if(shape == circle )
	{
		area = 3.14 * size*size;
		printf("Area of Circle = %f",area);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
