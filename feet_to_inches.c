#include <stdio.h>

float convert_to_inches(float feet){
	float conversion_factor = 12.0;
	float solution = feet * conversion_factor;
	if(feet == 1){
		printf("%.1f foot = %.1f inches\n", feet, solution);

	} else if (feet < 1) {
		printf("This number is too small to convert.");
	} else {
		printf("%.1f feet = %.1f inches\n", feet, solution);
	}
	return feet / conversion_factor;
	
}

int main(int argc, char *argv[]) {
	convert_to_inches(.99);
	return 0;
}

