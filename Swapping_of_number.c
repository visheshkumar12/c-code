#include<stdio.h>

int main() {
    int num1,num2;

    printf("enter number 1");
    scanf("%d",&num1);
    printf("enter number 2");
    scanf("%d",&num2);
    num1,num2=num2,num1;
    printf("after swapping value are", num1 ,num2);
    return 0;

