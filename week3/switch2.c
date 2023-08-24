#include<stdio.h>

int main(){
int day;
printf("To avoid ERROR(s) that have not been catered for\n in the program make sure you enter ONLY NUMBERS\n");
printf("\nenter the day number in the week (1-7): ");
scanf("%d",&day);

switch(day)
{
case 1: printf("1 is for MONDAY\n");
       break;
case 2: printf("2 is for TUESDAY\n");
       break;
case 3: printf("3 is for WED-DAY\n");
       break;
case 4:printf("4 is for THURSDAY\n");
       break;
case 5: printf("5 is for FRIDAY\n");
       break;
case 6: printf("6 is for SAT-DAY\n");
       break;
case 7: printf("7 is for SUNDAY\n");
       break;
default: printf("INVALID DAY\n");
        // break;
}

// main();
return(0);
}