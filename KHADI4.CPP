#include<iostream.h>
#include<conio.h>
class second
{
private:
float p,r,t,s1;

public:
void setdata(float x,float y,float z)
{
p=x;r=y;t=z;
}
void cal()
{
s1=(p+r+t)/100;
cout<<s1;
}
};
int main()
{
clrscr();
second o1;
o1.setdata(50.0,60.0,70.0);
o1.cal();
getch();
return 0;
}