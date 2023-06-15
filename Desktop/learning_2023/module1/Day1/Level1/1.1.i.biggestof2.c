#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers to compare seperated by spaces:\n");
    scanf("%d %d",&num1,&num2);
    
    if(num1>num2)
        printf("%d is larger than %d\n",num1,num2);
    else
        printf("%d is larger than %d\n",num2,num1);
    return 0;
}