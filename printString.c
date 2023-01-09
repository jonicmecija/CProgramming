#include <stdio.h>
#include <stdlib.h>

int main(){

	char word[] = "hello world";
	printf("i am saying %s\n", word);
	
	char input[50];
	printf("enter something: ");

	scanf("%[^\n]%*c", input);
	
	printf("echo: %s\n", input);
	
	return 0;
}
