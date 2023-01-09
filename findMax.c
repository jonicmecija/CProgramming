#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){

	if(a > b){
	return a;	
}
	return b;
}
int main(){
	
	int a = 0;
	
	a = max(51, 2);
	printf("%d\n", a);

	return 0;
}
