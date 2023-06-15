#include <stdio.h>

int main(){
    int num1, num2, max;
    printf("Enter two numbers to compare seperated by spaces:\n");
    scanf("%d %d",&num1,&num2);
    max= (num1>num2) ? num1 : num2;
    printf("%d is larger\n",max);
    return 0;40 50
}