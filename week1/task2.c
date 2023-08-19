

#include<stdio.h>
int main(void){
    char name[100];
    char Email[100];
    int student_number;
    printf("Enter your Name:\n");
    scanf("%s",name);//%s for string and %c for character
    printf("Enter your Student Number:\n");//%d for integer
    scanf("%d",&student_number);
    printf ("Enter Your email id: \n");
    scanf ( "%s" , Email );
    
    printf("\n\tName is:%s\n \tStudent number : %d\n \tEmail ID:%s\n ",name, student_number, Email);
    return 0;  
}