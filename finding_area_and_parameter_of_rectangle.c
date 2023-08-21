#include<stdio.h>

int main() {
    int length,breath;
    printf("enter length of rectangle");
    scanf("%d",&length);
    printf("enter breath of rectangle");
    scanf("%d",&breath);
   
   printf("perimeter of rectangle=%d/n",2*(length+breath));
   printf("area of rectangle=%d",length*breath);
   return 0;

}