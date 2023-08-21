#include<stdio.h>
#include<math.h>
// IF THE CHAR IS DIGIT OR NOT

int main() {
    int x;

    printf("ENTER CHARACTER:");
    scanf("%d",&x);
    printf("%d",x>=0 && x<=9);
    return 0;
}