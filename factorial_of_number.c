#include <stdio.h>
void main()
{
    int i,j=1,num;
    printf("enter num");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
       j=j*i;
   printf("factorial is %d",j);
}