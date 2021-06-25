#include <stdio.h>

//Figure out how to return array values from a function

char* return_name_string();
int* return_some_int();
int main()
{
	printf("%s\t at location: %p\n", return_name_string(), return_name_string()); //access array values through format specifier
	
	
	int* my_ptr = return_some_int(); // Store Address of int array.
	for(int x = 0; my_ptr[x] != 0; x++) //Access data of int array and print data.
	{
		//print each%dalue of the array and location in memory of that value.
		printf("%d\t%p\n", my_ptr[x], my_ptr[x]);
	}
	return 0;
}

char* return_name_string()
{
	static char full_name[] = "Christian Gobin"; //static char array keeps value outside scope of function.
	return full_name;
}

int* return_some_int()
{
	static int nums[] = {2,4,5,6,33,12};
	return nums;
}