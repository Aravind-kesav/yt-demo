//HURRY SUCCESSFULLY CREATED THE MULTIPLICATION TABLE PROGRAMME
#include<stdio.h>

#include<conio.h>
void main()
{
int number,product,count=1;
clrscr();
printf("Enter the number: " );
scanf("%d",&number);
while(count<=10){
int product=number*count;
printf("%d * %d = %d \n",number,count,product);
count=count++;
}
getch();
}