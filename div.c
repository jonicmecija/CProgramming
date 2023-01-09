#include <stdio.h>
#include <stdlib.h>

int main(){

	div_t answer;
	answer = div(13, 10);
	printf("quot: %d\n", answer.quot);
	printf("remainder: %d\n", answer.rem);
	return 0;
}
