#include<stdio.h>

int main(){
int month;
printf("enter the month number in a year (1-12): ");
scanf("%d",&month);

switch(month)
{
case 1: printf("1 is for January\n");
       break;
case 2: printf("2 is for February\n");
       break;
case 3: printf("3 is for March\n");
       break;
case 4:printf("4 is for April\n");
       break;
case 5: printf("5 is for May\n");
       break;
case 6: printf("6 is for June\n");
       break;
case 7: printf("7 is for July\n");
       break;
case 8:printf("8 is for August\n");
       break;
case 9: printf("9 is for September\n");
       break;
case 10: printf("10 is for October\n");
       break;
case 11: printf("11 is for November\n");
       break;
case 12: printf("12 is for December\n");
       break;
default: printf("INVALID Month Number\n");
        // break;
}

// main();
return(0);
}