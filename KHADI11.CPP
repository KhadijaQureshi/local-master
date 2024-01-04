#include<iostream.h>
#include<conio.h>
class fifth
{
private:
int a,b;

public:
void setdata(float x,float y)
{
a=x;b=y;
}
void cal()
{
 cout<<"largest number is:";
 if(a>b)
 cout<<a;
 else
 cout<<b;
}
};

int main()
{
clrscr();
fifth s1;
s1.setdata(8,9);
s1.cal();
getch();
return 0;
}