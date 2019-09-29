#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,num,a,arm=0,temp;
	cout<<"Enter the number";
	cin>>x;
	num=x;
	while(x!=0)
	{
		a=x%10;
		x=x/10;
        arm+=a*a*a;
			
	}
	if(num==arm)
	cout<<"Armstrong";
	else
	cout<<"Not armstrong";
return 0;	
}

