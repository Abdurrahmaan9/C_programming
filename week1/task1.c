// write a program in C that outputs:
// 1. the sum og three numbers.
// 2. the average of the same three numbers.

#include<stdio.h>
int main(void)
{
    /* code */
    int num1, num2, num3;
    printf("enter the first digit: ");
    scanf("%d",&num1);
    printf("enter the second digit: ");
    scanf("%d",&num2);
    printf("enter the third digit: ");
    scanf("%d",&num3);
    int sum = num1 + num2 + num3;

    float avarage = sum / 3;
    


    printf("The product of the three numbers is: %d\n", sum);
    printf("The avarage of the three numbers is: %f\n", avarage);
    return 0;
}
