#include<iostream>
using namespace std;
int main()
{
	int k,n,s=0,d;
	cout<<"Enter a number";
	cin>>k;
     while(k!=0)
	{
		d=k%10;
		s=s+d;
		k=k/10;
	    }
	cout<<"The added up value is "<<s;
	
	return 0;
}
