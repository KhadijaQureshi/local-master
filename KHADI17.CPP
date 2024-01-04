#include<iostream.h>
#include<conio.h>
class employee
{
private:
char emp_name[20];
double basic_pay;
double cal_da()
{
double da=0.5*basic_pay;
return(da);
}
double cal_hra()
{
double hra=0.15*basic_pay;
return(hra);
}

public:
void read();
void display_salary();
};

void employee::read()
{
cout<<"enter employee name:";
cin>>emp_name;
cout<<"enter basic pay of employee:";
cin>>basic_pay;
}
void employee::display_salary()
{
double gross_sal;
double da=cal_da();
double hra=cal_hra();
gross_sal=basic_pay+da+hra;
cout<<"gross salary of the empoyee:"<<gross_sal;
}

int main()
{
clrscr();
employee emp1;
emp1.read();
emp1.display_salary();
getch();
return 0;
}