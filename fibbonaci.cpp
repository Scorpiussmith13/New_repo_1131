#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,n;
	cout<<"Enter the limit of terms ";
	cin>>n;
	cout<<"\n The fibonacci series is as follows  "<<a<<","<<b;
	
	for(int i=1;i<=n-2;i++)
	{
		b=b+a;
		a=b-a;
		cout<<","<<b;
	}
	return 0;
 }
