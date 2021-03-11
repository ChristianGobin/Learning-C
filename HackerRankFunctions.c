#include <stdio.h>
//https://www.hackerrank.com/challenges/functions-in-c/problem
//HackerRank C functions problem.
/*
	Objective:
			Write a function that takes 4 int args and returns the largest int.
*/

int greatest_of_four(int a, int b, int c, int d){
	//make an int array to make the data easier to work with.
	int numbers[4] = {a,b,c,d};
	//Loop through each element of the array while keeping track of largest data point.
	//Only switch the max value when new value is larger.
	int tracker = numbers[0];
	for(int i = 1; i < sizeof(numbers); i++){
		if(numbers[i] > tracker){
			tracker = numbers[i];
			printf("%i", tracker);
			return tracker;
		} else {
			printf("%i", tracker);
			return tracker;
		}
	}
	return 0;
}
int main(int argc, char *argv[]) {
	greatest_of_four(4, 3, 6, 9);
}