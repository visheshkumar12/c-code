#include<stdio.h>

int main(){
    int i,j,n;
    printf("enter number till table have to printed");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
    
    printf("%d X %d=%d ",j,i,j*i);
    
    printf("\n");
}
    return 0;
}