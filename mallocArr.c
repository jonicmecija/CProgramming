#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int* ptr = (int*) malloc(5*sizeof(int));
	
	for(int i = 0; i < 5; i++){
		ptr[i] = 5 - i;
	}
	
	for(int i = 0; i < 5; i++){
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}
	
	// print address of contiguous memory block 
	printf("memory address: %p\n",ptr);
	
	free(ptr);
	printf("memory address after free: %p\n", ptr);
	return 0;
}
