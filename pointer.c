#include <stdio.h> // input output c functions
#include <stdlib.h> // common c functions

int main(){
	int* ptr;
	int age = 10;
	ptr = &age;
	
	printf("this is the address of age: %p\n", ptr);
	printf("this is the value inside of that address: %d\n", *ptr);
	return 0;
}
