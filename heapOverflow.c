#include <stdlib.h>
#include <stdio.h>

void heapOverflow(int size);
int main(){
	while(1){
	heapOverflow(1000000);
	}
	return 0;
}

void heapOverflow(int size){
	int* ptr = malloc(size * sizeof(int));
}
