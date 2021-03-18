#include <stdio.h>
/*
	Objective:
			Write a function that takes 4 int args and returns the largest int.
*/

void greatest_of_four(int a, int b, int c, int d){
	//make an int array to make the data easier to work with.
	int numbers[4] = {a,b,c,d};
	//Loop through each element of the array while keeping track of largest data point.
	//Only switch the max value when new value is larger.
	int tracker = numbers[0];
	int i = 0;
	while(i <= 4){
		if(numbers[i] > tracker){
			tracker = numbers[i];
		}
		i++;
	}
	printf("%i",tracker);
}

//There is no way to get the length of an array in C, instead use the hard coded arr length to iterate.
int main(int argc, char *argv[]) {
	greatest_of_four(4, 2, 1, 30);
}