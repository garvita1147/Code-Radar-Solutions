#include <stdio.h>
int main() {
    int num1,num2,num3,max;
    printf("enter three numbers:")
    scanf("%d,%d,%d",&num1,&num2, &num3);
    if(num1>=num2 && num1 >=num3){
       max = num1;
    } else if(num2 >= num1 && num2 >=num3){
        max = num2;
    } else {
        max = num3;
    }
    printf("the greatest number is: %d\n",max);

    return 0;
}