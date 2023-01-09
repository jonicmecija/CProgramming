#include <stdlib.h>
#include <stdio.h>

void stackOverflow();

int main(){
	while(1){
		stackOverflow();
	}

	return 0;
}

void stackOverflow(){
	long c; 
	long b;
}
