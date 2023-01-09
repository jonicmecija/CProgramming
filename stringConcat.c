#include <stdio.h>
#include <string.h>

int main(){
	
	char word[] = "these words are";
	char cool[] = "these words are";
	char newWord[50];
	
	//strcat(newWord, word);
	//strcat(newWord, cool);
	
	strcpy(newWord, word);

	printf("%s\n", newWord);
	printf("%d\n", strcmp(word, cool));	
	
	return 0;
}
