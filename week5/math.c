#include<stdio.h>
#include<math.h>

int main(){
    int x, y, result;

    printf("\nEnter Base value(x): ");
    scanf("%d", &x);
    printf("\nEnter Index value(y): ");
    scanf("%d", &y);

    result = pow(x,y);
    printf("%d raised to %d = %d\n", x, y, result);
    return 0;
}