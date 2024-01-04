#include<iostream.h>
#include<conio.h>
#include<math.h>
class third
{
private:
int a,b,r;

public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
}

void assign()
{
a=4;b=3;
}

void cal()
{
r=sqrt(pow(4,2)-pow(3,2));
cout<<r;
}
};

int main()
{
clrscr();
third s1;
s1.input();
s1.assign();
s1.cal();
getch();
return 0;
}