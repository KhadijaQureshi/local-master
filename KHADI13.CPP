#include<iostream.h>
#include<conio.h>
class seven
{
private:
int a,b,c;

public:
void assign()
{
a=7;b=9;c=4;
}

void input()
{
cout<<"enter the value of a:";
cin>>a;
cout <<"enetr the value of b:";
cin>>b;
cout<<"enter the value of c:";
cin>>c;
}

void setdata(float x,float y,float z)
{
a=x;b=y;c=z;
}

void cal()
{
 if(a>b && a>c)
 cout<<"largest number is:"<<a;
 else if(b>a && b>c)
 cout<<"largest number is:"<<b;
 else
 cout<<"largest number is:"<<c;
}
};

int main()
{
clrscr();
seven s1;
s1.assign();
s1.cal();
cout<<endl;
s1.input();
s1.cal();
cout<<endl;
s1.setdata(8,4,9);
s1.cal();
getch();
return 0;
}
