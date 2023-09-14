// while statement 2

// Multiplication Table
#include <stdio.h>
int main()
{
    /* code */
    int num, i = 1;
    printf("Multiplication Table of the given number: \n");
    printf("\n Enter any Number:\n");
    scanf("%d", &num);
    printf("Multiplication Table of %d: \n", num);
    while (i <= 12) {
        printf("\n %d x %d = %d\n", num, i, num * i);
        i++;
        }
    return 0;
}
