#include <stdio.h>
//Return an array from a function

int* generate_odd_ints();
int main()
{
	int* odd_arr_address = generate_odd_ints();
	printf("%p\n", &odd_arr_address);
	
	printf("%p", *odd_arr_address[1]);
	
}

int* generate_odd_ints()
{
	int odd_array[10];
	int x = 0;
	while(x <= 9)
	{
		for(int i = 1; i <= 10; i++)
		{
			if(i % 2 != 0)
			{
				odd_array[x] = i;
			}
		}
		x++;
	}
	return odd_array;
}