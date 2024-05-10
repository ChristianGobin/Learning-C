#include <stdio.h>

// Basic #1 include standard input output library, and print to console.

int say_hello() {
	printf("Hello! from say_hello(); \n");
}

int main() {
	printf("Hello World!\n"); // \n new line;
	say_hello(); //calling a function
	
	// Arrays
	
	char some_string[] = "Hello";
	int some_numbers[] = {3, 2, 55, 32};
	printf("%c\n", some_string[3]);
	printf("%i\n", some_numbers[0]);
	
	// since sizeof measures the amount of bits, and there are 4 bits in an int, we can find the amount of values in this array by dividing
	// the amount of total bits by 4. 
	for(int i = 0; i < sizeof(some_numbers) / sizeof(some_numbers[0]); i++){
		printf("%i, ", some_numbers[i]);
	}
	
	
	return 0;
}

