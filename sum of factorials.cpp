#include<iostream>
using namespace std;
int main()
{ int k=1,n,a,s=0;char y;
cout<<"Enter no of factorials";
cin>>a;
for(int i=1;i<=a;++i)
{

	cout <<" \n \n \n Enter a number";
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		k=k*i;
		
	}	
  cout<<"The factorial is "<<k;
  s= s+k;
  k=1;

}
cout<<" \n \n \nWant to find the sum of factorials? y for yes n for no";
cin>>y;
if (y=='y')
  cout<<"\n \n \nThe sum of factorials is "<<s;
 else 
 cout<<"FUCK U";
 exit(0);
  return 0;
}
