#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a[4]={1,2,3,4};
int *p1;
p1=a;
cout<<*(p1+0)<<" ";
cout<<*(p1+1)<<" ";
cout<<*(p1+2)<<" ";
cout<<*(p1+3);
getch();
return 0;
}
