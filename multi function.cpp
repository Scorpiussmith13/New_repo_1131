#include<iostream>
using namespace std;
void sum( int a,int b);
void division(int a,int b);
void mul(int a,int b);
void sub (int a,int b);
int main()
{
	int a,x,y;
	cin>>a>>x>>y;
	switch(a)
	{ case  1 : sum(x,y); 
	   break;
      	
      	case  2 : sub(x,y); 
	   break;
	
	    case  3 : mul(x,y); 
	   break;
	
	   case  4 : division(x,y); 
	   break;
	    
	
	}
	
	
	
	return 0;
}


void sum(int a,int b)
{
	int d;
	d = a+b;
	cout << "the sum is"<<d;
}
void sub(int a,int b)
{
	int d;
	d = a-b;
	cout << "the sub is"<<d;
}
 
void mul(int a,int b)
{
	int d;
	d = a*b;
	cout << "the pro is"<<d;
}

void division(int a,int b)
{
	int d;
	d = a/b;
	cout << "the div is"<<d;
}

