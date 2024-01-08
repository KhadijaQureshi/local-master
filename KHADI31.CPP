#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int daynumber;
cout<<"write the daynumber:";
cin>>daynumber;
switch(daynumber)
{
case 1:
cout<<"MONDAY";
break;
case 2:
cout<<"TUESDAY";
break;
case 3:
cout<<"WEDNESDAY";
break;
case 4:
cout<<"THURSDAY";
break;
case 5:
cout<<"FRIDAY";
break;
case 6:
cout<<"SATURDAY";
break;
case 7:
cout<<"SUNDAY";
break;
default:
cout<<"INVALID NUMBER";
}
getch();
return 0;
}