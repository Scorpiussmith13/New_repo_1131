#include<iostream>
using namespace std;
class calculator1
{
public:float a,b;
float c;
void int1()
{
cout<<"\n\nEnter the 2 numbers ";
cin>>a>>b;	
}	
void sum1()	
{
c=a+b;
cout<<"The added up value is "<<c;
}	
void sub1()
{  
c=a-b;
cout<<"\nThe subtracted value is "<<c;
}
void mul1()
{
	c=a*b;
	cout<<"\n The multiplied value is "<<c; 
}
void div1()
{
c=(float)a/b;
cout<<"\n The division results in  "<<c;
}
void per1()
{
c=(float)((a/b)*100);
cout<<"\n The percentage is "<<c<<"%";
}
};
int main()
{calculator1 calc;
while(1)
{
calc.int1();	
cout<<"\n\n\nEnter your choice of function for the calculator 1:SUM,2:SUBTRACT,3:MULTIPLY,4:DIVIDE,5:PERCENTAGE,6:exit";
int choice;
cin>>choice;
switch(choice)
{
	case 1:calc.sum1();
	break;
	case 2:calc.sub1();
	break;
	case 3:calc.mul1();
	break;
	case 4:calc.div1();
	break;
	case 5:calc.per1();
	break;
	case 6:exit(0);
	break;
    default:cout<<"Enter different no. ERROR";
}	
}
return 0;
}
