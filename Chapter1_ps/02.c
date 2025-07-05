//Write a program to find the area of circle and cylinder
#include<stdio.h>
int main(){
//cricle 
int radius;
printf("Enter the radius of the circle: \n");
scanf("%d",&radius);
printf("The area of circle is %f\n",radius*radius*3.14);
//area of cylinder = 2pir(r+h)
int r,h;
printf("Enter the radius of cylinder: \n");
scanf("%d",&r);
printf("Enter the height of cylinder: \n");
scanf("%d",&h);
float area = 2*3.14*r*(r+h);
printf("The area of cylinder is %f\n",area);
return 0;
}