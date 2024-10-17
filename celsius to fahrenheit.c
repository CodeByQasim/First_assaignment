#include<stdio.h>
#include<conio.h>
void main() {
	//declared varible
    float celsius;
    //input temperature in celsius from user
    printf("enter the temperature in celsius : ");
    scanf("%f",&celsius);
    //display the result 
    printf("the temperature in fahrenheit is : %f",(celsius*9/5)+32);
    getch();

   
}

