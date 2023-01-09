#include <stdio.h>
#include <stdlib.h>

int compare(const void* x, const void* y);

int main(){
	
	int nums[4] = {43, 2, 11, 100};
	for(int i = 0; i < 4; i++){
		printf("nums[%d] = %d\n", i, nums[i]);
	}
	qsort(nums, 4, sizeof(int), compare);
	for(int i = 0; i < 4; i++){
		printf("nums[%d] = %d\n", i, nums[i]);	
	}
	return 0;
}

int compare(const void* x, const void* y){
	return (*(int*)x - *(int*)y);
}
