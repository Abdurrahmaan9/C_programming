#include<stdio.h>

int main(){
int Month;
int day;
printf("To avoid ERROR(s) that have not been catered for\n in the program make sure you enter ONLY NUMBERS\n");
printf("\nenter the Month number in the week (1-2): ");
printf("\nenter the day number in the week (1-2): ");
scanf("%d",&Month);
scanf("%d", &day);

switch(Month)
{
    case 1: printf("The first case of the switch\n");
        switch (Month)
        {
        case 2:
            printf("this is the nested switch\n");
            break;
        }
        break;
    case 2: printf("this is the second case of the swtich");
        switch (Month)
        {
        case 2:
            printf("this is the nested switch\n");
            break;
        }
}

return(0);
}