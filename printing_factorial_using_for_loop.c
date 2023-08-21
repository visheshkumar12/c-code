#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
int sum=1;
for(int i=1;i<=n;i++){
    sum=sum*i;
}
    printf("factorial is %d",sum);
    return 0;
}