#include <stdio.h>

struct Person {
	int age;
	char name[10];
};

int main(int argc, char *argv[]) {
	char name[] = "Chris";
	printf("Hello World! %s\n", name);
	
	struct Person kid = {29, "Chris"};
	
	printf("Hello %s , age: %i", kid.name, kid.age);
	return 0;
	
	
	
}
