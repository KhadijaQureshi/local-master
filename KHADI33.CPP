#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int dn;
cout<<"enter the number of day:";
cin>>dn;
if(dn==1)
{
cout<<"MONDAY";
}
else if(dn==2)
{
cout<<"TUESDAY";
}
else if(dn==3)
{
cout<<"WEDNESDAY";
}
else if (dn==4)
{
cout<<"THURSDAY";
}
else if (dn==5)
{
cout<<"FRIDAY";
}
else if (dn==6)
{
cout<<"SATURDAY";
}
else if (dn==7)
{
cout<<"SUNDAY";
}
else
{
cout<<"INVALID NUMBER";
}
getch();
return 0;
}
