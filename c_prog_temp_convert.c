#include <stdio.h>
#include <math.h>
//Program prints a table of Farenheit to Celsius Conversion as seen in book
//The C Programming Language by k&r
//Integer arithmetic would truncate the calculation if the decimals were not specified.
int main()
{
	printf("Fahrenheit\tCelsius\n");
	float fahrenheit;
	float celsius;
	printf("%.2f", celsius);
	
	for(fahrenheit = 0; fahrenheit <= 200; fahrenheit += 20)
	{
		celsius = (fahrenheit - 32.0) * 5.0 / 9.0; 
		printf("%.2f\t%.2f\n", fahrenheit, celsius);
	}
	
}

