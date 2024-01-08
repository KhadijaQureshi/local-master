#include<iostream.h>
#include<conio.h>
#include<math.h>
class six
{
private:
int s,a,b,c;
public:
void assign()
{
s=a+b+c/2;
a=9;
b=8;
c=7;
}
void equation()
{
int area;
area=sqrt(s(s-a)*(s-b)*(s-c));
cout<<"sqrt("<<s<<"("<<s<<"-"<<a<<")*("<<s<<"-"<<b<<")*("<<s<<"-"<<c<<"))="<<area;
}
};

int main()
{
clrscr();
six o1;
o1.assign();
o1.equatiion();
getch();
return 0;
}