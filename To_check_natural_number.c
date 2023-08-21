#include<stdio.h>
#include<math.h>

int main() {
    int number;
    printf("ENTER NUMBER:");
    scanf("%d",&number);

    if(number>=1){
        printf("IT IS A NATURAL NUMBER");
    }else if(number<=1){
        printf("NOT A NATURAL NUMBER");
    }else {
        printf("NOT A VALID NUMBER");
    }

}
