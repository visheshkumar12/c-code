#include<stdio.h>
#include<math.h>
//MARKS MORE THAN 30 PASS REST FAIL
int main() {
    int marks;
    printf("ENTER MARKS(0-100):");
    scanf("%d",&marks);

    if(marks>=30 && marks<=100){
        printf("STUDENT IS PASS");
     } else if(marks>=0 && marks<=30) {
        printf("student is fail");
     } else {
        printf("WRONG MARKS");
     }
     return 0;
}