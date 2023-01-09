#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int* ptr = calloc(10, sizeof(int));
	// print whats in memory block
	for(int i = 0; i < 10; i++){
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}
	//reallocate the memory block
	ptr = realloc(ptr, sizeof(int) * (10 + 5));
	
	printf("\n");	
	// print contents of memory block
	for(int i = 0; i < 15; i++){
		printf("ptr[%d] = %d\n", i, ptr[i]);	
	}
	
	return 0;
}
