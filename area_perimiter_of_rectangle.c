// Write a program that finds the perimeter, and area of a rectangle. Given the length, and width
#include <stdio.h>

double find_area(double l, double w)
{
	double area = l*w;
	printf("The area of your rectangle is: %.2f\n", area);
	return area;
}

double find_perimeter(double l, double w)
{
	double perimeter = 2*(l+w);
	printf("The perimeter of: %.2f\n", perimeter);
	return perimeter;
}

int main()
{
	double my_len = 40;
	double my_wid = 90;
	
	find_area(my_len, my_wid);
	find_perimeter(my_len, my_wid);
}