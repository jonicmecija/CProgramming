#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int age = 32;
	double gpa = 3.4;
	char grade = 'a';
	// pointers are types of data that show the address of a variable
	// pointer data type (memory address inside of our computer)

	printf("this is the address of age: %p\n", &age);
	return 0;
}
