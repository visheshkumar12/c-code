#include<stdio.h>
#include<math.h>
//GRADE TO STUDENT

int main() {
    int marks;
    printf("ENTER MARKS(1-100) :");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100){
        printf("GRADE IS : A+");
    } else if(marks>=70 && marks<=90){
        printf("GRADE IS : A");
    } else if(marks>=30 && marks<=70){
        printf("GRADE IS : B");
    }else if(marks>=0 && marks<=30){
        printf("GRADE IS : C");
    }else{
        printf("WRONG MARKS");
        return 0;
    }

}