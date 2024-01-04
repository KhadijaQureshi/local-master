#include<iostream.h>
#include<conio.h>
#include<math.h>
class third
{
private:
float s,a,b,c,area;

public:
void input()
{
cout<<"enter the value of a,b,c,:";
cin>>a>>b>>c;
s=(a+b+c)/2;
}
void cal()
{
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<area;
}
};
int main()
{
clrscr();
third o1;
o1.input();
o1.cal();
getch();
return 0;
}
