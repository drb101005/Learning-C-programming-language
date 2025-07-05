//Write a code to find the area of reactangle
#include<stdio.h>
int main(){
int length,breadth;
printf("Enter the length: \n");
scanf("%d",&length);
printf("Enter the breadth: \n");
scanf("%d",&breadth);


int area = length*breadth;
printf("The area of the rectangle is %d",area);

return 0;

}