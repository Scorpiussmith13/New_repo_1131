#include<iostream>
using namespace std;
int main()
{
	int gcd=0,a,b;
	cout<<"Enter first no ";
	cin>>a;
	cout<<"\n\n enter 2nd no ";
	cin>>b;
     for(int i=2;i<=1000;++i)
     {
     	if( a%i==0 && b%i==0)
     {
		 	gcd=i;
     	break;
  }
	}
cout<<"GCD is "<<gcd;
int lcm;
lcm = a*b/gcd;
cout<<"\n\nLCM is "<<lcm;

return 0;



}
