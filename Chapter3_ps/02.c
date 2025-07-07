//Write a program to find if a student has passed or failed in an exam 
//To pass he needs avg of 40 percent and atleast 33 in each

#include<stdio.h>
int main(){

    int mark1,mark2,mark3;
    printf("Enter marks in subject 1 : ");
    scanf("%d",&mark1);
    printf("Enter marks in subject 1 : ");
    scanf("%d",&mark1);
    printf("Enter marks in subject 1 : ");
    scanf("%d",&mark1);

     if ((mark1 + mark2 + mark3) / 3 > 40 && mark1 > 33 && mark2 > 33 && mark3 > 33) {
         printf("You passed");
}   
     else {
         printf("You failed");
}







}