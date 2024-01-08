#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int year;
cout<<"enter the year:";
cin>>year;
if((year%4==0 && year%100!=0) && year%400==0)
{
cout<<"it is leap year";
}
else
{
cout<<"it is not leap year";
}
getch();
return 0;
}