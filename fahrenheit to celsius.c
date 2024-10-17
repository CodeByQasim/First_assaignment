#include<stdio.h>
#include<conio.h>
void main()
{
	//declared varible
    float fahrenheit,celsius;
    //input temperature in fahrenheit from user
    printf("enter the temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    //display the result 
    printf("the temperature in celsius is : %f",(fahrenheit-32)*5/9);
    getch();

   
}
