#include<iostream.h>
#include<conio.h>
class sixth
{
private:
int a,b;

public:
void setdata(float x,float y)
{
a=x;b=y;
}

int cal()
{
 if(a>b)
 return a;
 else
 return b;
}
};

int main()
{
clrscr();
int r;
sixth s1;
s1.setdata(5,10);
r=s1.cal();
cout<<"lagest number is:"<<r;
getch();
return 0;
}