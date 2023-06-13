// Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
//     - Set 1st bit, if operation type is 1
//     - Clear 31st bit, if operation type is 2
//     - Toggle 16th bit, if operation type is 3
//    You can consider the below function prototype,
//     - bit_operations(int num, int oper_type);
#include <stdio.h>
#include <stdlib.h>

int bit_operations(int num, int oper_type){
    int result;
    switch(oper_type){7
        case 1:
        result = num | 1;
        break;
        case 2:
        result = num & ~(1<<31);
        break;
        case 3:
        result = num ^ (1<<16);
        break;
        }
        return result;
}

int main(){
    int num,oper_type;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the operation type 1/2/3: ");
    scanf("%d",&oper_type);
    printf("The result is: %d",bit_operations(num,oper_type));
    return 0;    
}