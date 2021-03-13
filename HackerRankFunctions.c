#include <stdio.h>
//https://www.hackerrank.com/challenges/functions-in-c/problem
//HackerRank C functions problem.
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
	while(i <= sizeof(numbers)){
		if(numbers[i] > tracker){
			tracker = numbers[i];
		}
		i++;
	}
	printf("%i",tracker);
}
int main(int argc, char *argv[]) {
	int randoms[4] = {1,2,3,4};
	int i = 0;
	while(i <= sizeof(randoms)){
		printf("%i\n", randoms[i]);
		i++;
	}
}