#include<iostream.h>
#include<conio.h>
class smw
{
private:
float a,b,c,d;

public:
void assign()
{
a=50;b=50;c=2;
}
void input()
{
cout<<"enter the value of a,b,c:";
cin>>a>>b>>c;
}
void seedata(float x,float y,float z)
{
a=x;b=y;c=z;
}
void cal()
{
d=a+b/c;
cout<<d;
}
};
int main()
{
clrscr();
smw o1,o2,o3;
o1.assign();
o1.cal();
cout<<endl;
o2.input();
o2.cal();
cout<<endl;
o3.seedata(2.0,3.0,4.0);
o3.cal();
cout<<endl;
getch();
return 0;
}