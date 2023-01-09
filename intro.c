#include <stdio.h>

int main(){
    int num1, num2;
    // age = age + 2;
    double gpa = 3.7;
    char grade = 'a'; // can only store one character in a char variable
    
    // how to make a string (collection of characters)
    char phrase[] = "hello";

    printf("\n");
    printf("Welcome to the calculator!\n");
    printf("Please enter number 1: \n");
    scanf("%d", &num1);
    printf("Please enter number 2: \n");
    scanf("%d", &num2);

    printf("This is the calculation of your two numbers using addition: %d\n", num1 + num2);
    printf("This is the calculation of your two numbers using subtraction: %d\n", num1 - num2);
    printf("This is the calculation of your two numbers using multiplication: %d\n", num1 * num2);
    printf("This is the calculation of your two numbers using division: %d\n", num1 / num2);


    return 0;
}