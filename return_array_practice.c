#include <stdio.h>
//Return an array from a function

char* get_and_return_name();
int main()
{
	char* my_name = get_and_return_name();
	printf("%c", my_name);
}

char* get_and_return_name()
{
	char name[100];
	printf("Enter Your Name: ");
	scanf("%s", name);
	return name;
}