#include <stdio.h>
#include <stdlib.h>


int main(){

    // make dynamic array
    int size = 10;
    int* nums = malloc(10*sizeof(int));

    for(int j = 0; j < 10; j++){
        nums[j] = j;
    }

    for(int i = 0; i < 10; i++){
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    int memSize = sizeof(nums) / sizeof(nums[0]);

    printf("%d", memSize);
    free(nums);
    return 0;
}