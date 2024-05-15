// return the conversion from fahren to celsius, from 10 degrees to 100, in increments of 10 degrees.
// one of the first lessons in "the c progamming language" book
#include <stdio.h>

main() {
	float fahren, celsius;
	int start, end, step;
	
	start = 10;
	end = 100;
	step = 10;
	
	fahren = start;
	
	while(fahren != end){
		celsius = (fahren - 32) * 5 / 9;
		printf("Fahren: %.2f  Celsius: %.2f \n", fahren, celsius);
		fahren = fahren + step;
	}
	
}